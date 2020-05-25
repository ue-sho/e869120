// 惑星探査 (Planetary Exploration)
// 所要時間 x分
// 2次元累積和分からなくて調べてしまった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<char>> planet(m, vector<char>(n));
    rep(i, m){
        rep(j, n){
            cin >> planet[i][j];
        }
    }
    
    vector<vector<int>> J(m+1, vector<int>(n+1)), O(m+1, vector<int>(n+1)), I(m+1, vector<int>(n+1));
    rep(i, m){
        rep(j, n){
            J[i+1][j+1] = J[i][j+1] + J[i+1][j] - J[i][j] + (planet[i][j] == 'J' ? 1 : 0);
            O[i+1][j+1] = O[i][j+1] + O[i+1][j] - O[i][j] + (planet[i][j] == 'O' ? 1 : 0);
            I[i+1][j+1] = I[i][j+1] + I[i+1][j] - I[i][j] + (planet[i][j] == 'I' ? 1 : 0);
        }
    }

    rep(q, k){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        --a; --b;
        int j = J[c][d] - J[c][b] - J[a][d] + J[a][b];
        int o = O[c][d] - O[c][b] - O[a][d] + O[a][b];
        int i = I[c][d] - I[c][b] - I[a][d] + I[a][b];
        cout <<  j  << " " << o << " " << i << endl;
    }

    return 0;
}