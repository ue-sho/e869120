// AtColor
// 所要時間 12分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n;
    cin >> n;
    vector<int> color(1000002);
    rep(i, n){
        int a, b;
        cin >> a >> b;
        color[a] += 1;
        color[++b] -= 1;
    }
    rep(i, 1000001){
        color[i+1] += color[i];
    }
    int mx = 0;
    rep(i, 1000001){
        mx = max(mx, color[i]);
    }
    cout << mx << endl;

    return 0;
}