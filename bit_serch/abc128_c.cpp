// Switches
// 所要時間 分
// 自力で解けたはず
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m);
    rep(i, m){
        int k;
        cin >> k;
        rep(j, k){
            int s;
            cin >> s;
            v[i].push_back(s);
        }
    }
    vector<int> p(m);
    rep(i, m){
        cin >> p[i];
    }

    int ans = 0;
    for(int bit = 0; bit < (1<<n); bit++){
        bool ok = true;
        rep(i, m){
            int cnt = 0;
            for(auto a : v[i]){
                if(bit & (1<<(a-1))){
                    cnt++;
                }
            }
            if(cnt%2 != p[i]){
                ok = false;
                break;
            }
        }
        if(ok)
            ans++;
    }
    cout << ans << endl;

    return 0;
}
