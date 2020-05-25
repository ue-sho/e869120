// カラオケ
// 所要時間 21分
// for文の組み方に悩んでしまった
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
    vector<vector<ll>> a(n, vector<ll>(m));
    rep(i, n){
        rep(j, m){
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for(int j=0; j<m-1; ++j){
        for(int k=j+1; k<m; ++k){
            ll sum = 0;
            rep(i, n){
                ll mx = 0;
                mx = max(a[i][j], a[i][k]);
                sum += mx;
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;

    return 0;
}