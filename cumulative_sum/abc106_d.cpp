// AtCoder Express 2
// 所要時間 x分
// 分からなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n, m, Q;
    cin >> n >> m >> Q;
    vector<vector<int>> a(n+1, vector<int>(n+1));
    rep(i, m){
        int l, r;
        cin >> l >> r;
        a[l][r]++;
    }

    vector<vector<int>> cum(n+1, vector<int>(n+1));
    rep(i, n){
        rep(j, n){
            cum[i+1][j+1] = cum[i][j+1] + cum[i+1][j] - cum[i][j] + a[i+1][j+1];
        }
    }

    vector<int> ans(Q);
    rep(i, Q){
        int p, q;
        cin >> p >> q;
        --p;
        ans[i] = cum[q][q] - cum[p][q] - cum[q][p] + cum[p][p];
    }
    rep(i, Q){
        cout << ans[i] << endl;
    }

    return 0;
}