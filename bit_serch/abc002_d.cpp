// Exhaustive Search
// 所要時間 30分くらい？(1WA)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int n, m;
    cin >> n >> m;
    
    vector<vector<bool>> acq(n, vector<bool>(n));
    rep(i, n){
        acq[i][i] = true;
    }
    rep(i, m){
        int x, y;
        cin >> x >> y;
        --x; --y;
        acq[x][y] = true;
        acq[y][x] = true;
    }
    
    int ans = 0;
    rep(bit, 1<<n){
        vector<int> res;
        rep(i, n){
            if(bit & (1 << i)){
                res.push_back(i);    
            }
        }
        
        bool ok = true;
        rep(i, (int)res.size()){
            REP(j, i+1, (int)res.size()){
                if(!acq[res[i]][res[j]]){
                    ok = false;
                }
            }
        }
        if(ok){
            ans = max(ans, (int)res.size());
        }
    }

    cout << ans << endl;
    
    return 0;
}
