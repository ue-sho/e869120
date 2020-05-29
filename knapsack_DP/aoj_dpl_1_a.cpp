// Coin Changing Problem
// けんちょんさんの記事見ながら
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
    
    vector<int> c(m);
    rep(i, m){
        cin >> c[i];
    }
    
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    REP(i, 1, n+1){
        rep(j, m){
            if(i - c[j] >= 0){
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
            else if(dp[i] == INT_MAX){
                dp[i] = dp[i-1];
            }
        }
    }

    cout << dp[n] << endl;
        
    return 0;
}
