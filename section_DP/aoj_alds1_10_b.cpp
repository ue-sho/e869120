#include<iostream>
#include<vector>
#include<climits>
using namespace std;

constexpr int MAX = 100;

int main() {

    int n;
    cin >> n;
    vector<int> element(n + 1); 
    // Matrix_i が element[i-1] element[i] の行列となる
    for(int i = 1; i <= n; ++i){
        cin >> element[i-1] >> element[i];
    }

    vector<vector<int>> dp(MAX + 1, vector<int>(MAX + 1));
    for(int l = 2; l <= n; ++l){    // 行列の数 |i - j|
        for(int i = 1; i <= n-l+1; ++i){    
            // Matrix_i から Matrix_j の連鎖行列積
            int j = i + l - 1;
            dp[i][j] = INT_MAX;
            for(int k = i; k <= j-1; k++){  // 最小を探して記録
                int chain_matrix = dp[i][k] + dp[k+1][j] + element[i-1] * element[k] * element[j];
                dp[i][j] = min(dp[i][j], chain_matrix);
            }
        }
    }
    // Matrix_1 ~ Matrix_n の最小値を出力
    cout << dp[1][n] << endl;
   
    return 0;
}