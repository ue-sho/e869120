// AtCoder Market
// 所要時間 17分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    ll n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n){
        cin >> a[i] >> b[i];
    }

    ll ans = LLONG_MAX;
    rep(i, n){
        ll in = a[i];
        rep(j, n){
            ll out = b[j];
            ll tmp = 0;
            rep(k, n){
                tmp += abs(a[k]-in) + abs(a[k]-b[k]) + abs(b[k]-out);
            }
            ans = min(ans, tmp);
        }
    }    
    cout << ans << endl;

    return 0;
}