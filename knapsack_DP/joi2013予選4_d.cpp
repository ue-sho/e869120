// 暑い日々 (Hot days)
#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define rep(i, n)       for(int i=0; i<(n); ++i)
#define REP(i, d, n)    for(int i=(d); i<(n); ++i)
#define all(v)          v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int d, n;
    cin >> d >> n;
    vector<int> t(d);
    rep(i, d){
        cin >> t[i];
    }
    
    vector<int> a(n), b(n), c(n);
    rep(i, n){
        cin >> a[i] >> b[i] >> c[i];    
    }
    
    int dp[205][205] = {};   // 日にち、服の種類
    rep(i, n){
        if(a[i] <= t[0] && t[0] <= b[i]){
            continue;
        }
        else{
            dp[0][i] = -1;
        }
    }
    
    REP(i, 1, d){
        rep(j, n){  // 当日
            if(a[j] <= t[i] && t[i] <= b[j]){
                rep(k, n){  // 前日
                    if(dp[i-1][k] == -1){
                        continue;
                    }
                    dp[i][j] = max(dp[i][j], dp[i-1][k] + abs(c[j] - c[k]));
                }
            }
            else{
                dp[i][j] = -1;
            }
        }
    }
    
    int ans = 0;
    rep(i, n){
        ans = max(ans, dp[d-1][i]);
    }
    cout << ans << endl;
    
    return 0;
}
