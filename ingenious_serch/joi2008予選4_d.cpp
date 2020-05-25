// 星座探し
// 所要時間 24分
// O(n*n) で解いたけど O(N*N*M) でも解ける
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int m;
    cin >> m;
    vector<P> f;
    rep(i, m){
        int x, y;
        cin >> x >> y;
        f.emplace_back(x, y);
    }
    int n;
    cin >> n;
    vector<P> s;
    rep(i, n){
        int x, y;
        cin >> x >> y;
        s.emplace_back(x, y);
    }
    sort(all(f));
    sort(all(s));
    
    rep(i, n){
        int x = s[i].first - f[0].first;
        int y = s[i].second - f[0].second;
        vector<bool> ok(m);
        int idx = 0;
        rep(j, n){
            P u = {f[idx].first + x,  f[idx].second + y};
            if(s[j] == u){
                ok[idx] = true;
                idx++;
            }
        }
        bool flag = true;
        rep(k, m){
            if(!ok[k]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << x << " " << y << endl;
            return 0;
        }
    }

    return 0;
}