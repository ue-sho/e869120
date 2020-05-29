// シルクロード (Silk Road)
#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define rep(i, n)       for(int i=0; i<(n); ++i)
#define REP(i, d, n)    for(int i=(d); i<(n); ++i)
#define all(v)          v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int n, m;
    cin >> n >> m;
    vector<int> d(n);
    rep(i, n){
        cin >> d[i];
    }
    vector<int> c(m);
    rep(i, m){
        cin >> c[i];
    }
    
    
    vector<vector<int>> dp(m+1, vector<int>(n+1, 1LL << 60));    // 日にち、都市
    dp[0][0] = 0;    
    REP(i, 1, m+1){
        rep(j, min(i, n)){
            dp[i][j] = min(dp[i][j], dp[i-1][j]);                       // 休む
            dp[i][j+1] = min(dp[i][j+1], dp[i-1][j] + c[i-1] * d[j]);   // 進む
        }        
    }
    
    int ans = 1LL << 60;
    rep(i, m+1){
        ans = min(ans, dp[i][n]);
    }
    cout << ans << endl;
    
    return 0;
}
