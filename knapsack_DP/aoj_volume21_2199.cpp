// Differential Pulse Code Modulation
// 自力無理
#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define rep(i, n)       for(int i=0; i<(n); ++i)
#define REP(i, d, n)    for(int i=(d); i<(n); ++i)
#define all(v)          v.begin(), v.end()
using P = pair<int, int>;

constexpr int INF = 1LL << 60;

template<class T> 
inline bool chmax(T &a, const T &b){
    if(a < b){
        a = b;
        return true;
    }
    return false;
}

template<class T> 
inline bool chmin(T &a, const T &b){
    if(a > b){
        a = b;
        return true;
    }
    return 0;
}

signed main() {

    int n, m;
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        
        vector<int> c(m);
        rep(i, m){
            cin >> c[i];
        }
        vector<int> x(n);
        rep(i, n){
            cin >> x[i];
        }

        vector<vector<int>> dp(n+1, vector<int>(256, INF));
        dp[0][128] = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<=255; j++){
                if(dp[i][j] == INF){
                    continue;
                }
                for(int k=0; k<m; k++){
                    if(c[k] < 0){
                        chmin(dp[i+1][max(0LL,c[k]+j)], dp[i][j]+(max(0LL,c[k]+j)-x[i])*(max(0LL,c[k]+j)-x[i]));
                    }
                    else{
                        chmin(dp[i+1][min(255LL,c[k]+j)], dp[i][j]+(min(255LL,c[k]+j)-x[i])*(min(255LL,c[k]+j)-x[i]));
                    }
                }
            }
        }
        
        int ans = INF;
        for(int i=0; i<=255; i++){
            if(dp[n][i] == INF) continue;
            chmin(ans,dp[n][i]);
        }
        cout << ans << endl;
    }
    
    
    return 0;
}