// パ研軍旗
#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define rep(i, n)       for(int i=0; i<(n); ++i)
#define REP(i, d, n)    for(int i=(d); i<(n); ++i)
#define all(v)          v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int n;
    cin >> n;
    vector<vector<int>> s(n, vector<int>(3, 5));    // 5で初期化
    rep(i, 5){
        rep(j, n){
            char c;
            cin >> c;
            if(c == 'R'){
                s[j][0]--;
            }
            else if(c == 'B'){
                s[j][1]--;
            }
            else if(c == 'W'){
                s[j][2]--;
            }
        }
    }
    
    int dp[1000][3] = {};    // 列、色
    rep(i, n){
        dp[i + 1][0] = min(dp[i][1], dp[i][2]) + s[i][0];	// 赤
        dp[i + 1][1] = min(dp[i][0], dp[i][2]) + s[i][1];	// 青
        dp[i + 1][2] = min(dp[i][1], dp[i][0]) + s[i][2];	// 白
    }
    
    int ans = 1LL << 60;  
    rep(i, 3){
        ans = min(ans, dp[n][i]);
    }
    cout << ans << endl;
                                  
    return 0;
}
