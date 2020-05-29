// Knapsack Problem
// けんちょんさんの記事見ながら
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

signed main() {
 
	int n, w;
	cin >> n >> w;
	
	vector<int> value(n), weight(n);
	rep(i, n){
		cin >> value[i] >> weight[i];
	}
	
	int dp[105][10005] = {};
	rep(i, n){
		rep(j, w+1){
			if(j >= weight[i]){
				dp[i+1][j] = max(dp[i+1][j-weight[i]] + value[i], dp[i][j]);
			}
			else{
				dp[i+1][j] = dp[i][j];
			}
		}
	}
		
	cout << dp[n][w] << endl;
	
    return 0;
}