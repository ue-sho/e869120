// パスタ
#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define rep(i, n)       for(int i=0; i<(n); ++i)
#define REP(i, d, n)    for(int i=(d); i<(n); ++i)
#define all(v)          v.begin(), v.end()
using P = pair<int, int>;

signed main() {
    
    int n, k;
    cin >> n >> k;
    vector<int> meal(n, -1);
    rep(i, k){
        int a, b;
        cin >> a >> b;
        meal[--a] = b;
    }
    
    int dp[100][4][4] = {}; // 日にち、i-1日目のパスタ、i日目のパスタ、
    
    // 初日
    if(meal[0] != -1){
        dp[0][0][meal[0]] = 1;
    }
    else{
        REP(i, 1, 4){
            dp[0][0][i] = 1;
        }
    }
    
    
    REP(i, 1, n){           // 日にち 
        rep(j, 4){          // i-2日目のパスタ   i=1日目は、i-2日目がないため j = 0 に値が入っている
            REP(k, 1, 4){   // i-1日目のパスタ
                if(meal[i] != -1){                                  // 食べるものが決まっている
                    if(!(j == k && j == meal[i])){                  // 3日連続じゃないなら
                        dp[i][k][meal[i]] += dp[i-1][j][k];         // i日目のパスタ (meal[i])
                        dp[i][k][meal[i]] %= 10000;
                    }
                }
                else{                                               // 食べるものが決まってない
                    REP(l, 1, 4){                                   // i日目のパスタ
                        if(!(j == k && j == l)){                    // 3日連続じゃないなら
                            dp[i][k][l] += dp[i-1][j][k];
                            dp[i][k][l] %= 10000;
                        }
                    }      
                }
            }       
        }
    }
    
    int ans = 0;
    REP(j, 1, 4){
        REP(k, 1, 4){
            ans += dp[n-1][j][k];
            ans %= 10000;
        }
    }
    
    cout << ans << endl;

    return 0;
}
