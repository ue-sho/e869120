// 鉄道旅行 (Railroad Trip)
// 所要時間 21分
// ll にし忘れて 1WA
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> p(m);
    rep(i, m){
        int tmp;
        cin >> tmp;
        p[i] = --tmp;
    }
    vector<ll> a(n-1), b(n-1), c(n-1);
    rep(i, n-1){
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<ll> cum(n-1);
    rep(i, m-1){
        int a = p[i];
        int b = p[i+1];
        if(a > b){
            swap(a, b);
        }
        cum[a]++;
        cum[b]--;
    }
    rep(i, n-1){
        cum[i+1] = cum[i+1] + cum[i];
    }

    ll ans = 0;
    rep(i, n-1){
        if(a[i] * cum[i] > b[i] * cum[i] + c[i]){
            ans += b[i] * cum[i] + c[i];
        }
        else{
            ans += a[i] * cum[i];
        }
    }
    cout << ans << endl;
    



    return 0;
}