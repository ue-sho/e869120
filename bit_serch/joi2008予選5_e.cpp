/**
 * おせんべい
 * https://atcoder.jp/contests/joi2008yo/tasks/joi2008yo_e
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int r, c;
    cin >> r >> c;
    
    vector<vector<int>> senbei(r, vector<int>(c));
    rep(i, r){
        rep(j, c){
            cin >> senbei[i][j];
        }
    }
    
    int ans = 0;
    rep(bit, 1<<r){
        vector<vector<int>> tmp = senbei;
        rep(i, r){
            if(bit & (1<<i)){
                rep(j, c){
                    tmp[i][j] ^= 1;
                }
            }
        }
        int sum = 0;
        rep(j, c){
            int cnt = 0;
            rep(i, r){
                if(tmp[i][j]){
                    cnt++;
                }
            }
            sum += max(cnt, r-cnt);
        }
        ans = max(ans, sum);
    }
    
    cout << ans << endl;
    
    return 0;
}
