// Longest Common Subsequence 
// 厳しい
#include<iostream>
#include<vector>
using namespace std;

// 最長共通部分列
int lcs(string x, string y){
    constexpr int MAX = 1000;
    vector<vector<int>> dp(MAX + 1, vector<int>(MAX + 1));
    
    int cnt = 0;
    int n = x.length();
    int m = y.length();
    // 1-indexにする
    x = ' ' + x;  // x[0]をつくる
    y = ' ' + y;  // y[0]をつくる

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(x[i] == y[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
            cnt = max(cnt, dp[i][j]);
        }
    }
    return cnt;
}

int main() {

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s1, s2;
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << endl;
    }

    return 0;
}