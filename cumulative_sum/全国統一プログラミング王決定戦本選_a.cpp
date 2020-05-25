// Abundant Resources
// 所要時間 18分
// 添え字でまよってしまった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
    }

    vector<ll> cum(n+1);
    cum[0] = 0;
    rep(i, n){
        cum[i+1] = cum[i] + a[i];
    }

    REP(i, 1, n+1){
        ll mx = 0;
        for(int j=0; j+i<=n; ++j){
            mx = max(mx, cum[j+i]-cum[j]);
        }
        cout << mx << endl;
    }

    return 0;
}