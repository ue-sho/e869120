// 1年生
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {
    
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    
    int dp[25][105] = {};
    dp[a[0]][0] = 1;
    REP(i, 1, (int)a.size()-1){
        rep(j, 21){
            if(dp[j][i-1] == 0){
                continue;
            }
            if(j + a[i] <= 20){
                dp[j+a[i]][i] += dp[j][i-1];
            }
            if(j - a[i] >= 0){
                dp[j-a[i]][i] += dp[j][i-1];
            }
        }
    }

    cout << dp[a.back()][n-2] << endl;

    return 0;
}
