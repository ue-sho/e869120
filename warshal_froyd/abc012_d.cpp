// バスと避けられない運命
// 所要時間 6分
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
    const int INF = 1e9;
    vector<vector<int>> d(n, vector<int>(n, INF));
    rep(i, m){
        int a, b, t;
        cin >> a >> b >> t;
        --a; --b;
        d[a][b] = t;
        d[b][a] = t;
    }
    rep(i, n){
        d[i][i] = 0;
    }

    rep(k, n){
        rep(i, n){
            rep(j, n){
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }

    int ans = INF;    
    rep(i, n){
        int mx = 0;
        rep(j, n){
            mx = max(mx, d[i][j]);
        }
        ans = min(ans, mx);
    }
    cout << ans << endl;

    return 0;
}