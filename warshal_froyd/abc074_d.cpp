// Restoring Road Network
// 所要時間 47分
// 問題文の理解と道路の構造の検知に手間取った
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
    vector<vector<ll>> d(n, vector<ll>(n));
    rep(i, n){
        rep(j, n){
            cin >> d[i][j];
        }
    }

    vector<vector<bool>> avoid(n, vector<bool>(n, false));
    bool ok = true;
    rep(k, n){
        rep(i, n){
            rep(j, n){
                // i == k k == j じゃないとき d[i][j] == d[i][k]+d[k][j]
                // が成り立つなら i から j に直接道路はない
                if(i != k && k != j && d[i][j] == d[i][k]+d[k][j]){
                    avoid[i][j] = true;
                }
                // d[i][k]+d[k][j] が d[i][j] のとき最短経路が更新されるので条件を満たさない
                if(d[i][j] > d[i][k]+d[k][j]){
                    ok = false;
                }
            }
        }
    }

    if(ok){
        ll ans = 0;
        rep(i, n){
            // 被りがないように i+1 から始める
            for(int j=i+1; j<n; ++j){
                if(!avoid[i][j]){
                    ans += d[i][j];
                }
            }
        }
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}