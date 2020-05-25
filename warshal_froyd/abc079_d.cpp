// Wall
// 所要時間 6分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int h, w;
    cin >> h >> w;
    vector<vector<int>> c(10, vector<int>(10));
    rep(i, 10){
        rep(j, 10){
            cin >> c[i][j];
        }
    }

    rep(k, 10){
        rep(i, 10){
            rep(j, 10){
                c[i][j] = min(c[i][j], c[i][k]+c[k][j]);
            }
        }
    }

    int ans = 0;
    rep(i, h){
        rep(j, w){
            int a;
            cin >> a;
            if(a != -1){
                ans += c[a][1];
            }
        }
    }
    cout << ans << endl;

    return 0;
}