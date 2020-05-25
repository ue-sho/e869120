// 家の建設
// 所要時間 16分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int h, w;
    ll k, v;
    cin >> h >> w >> k >> v;
    vector<vector<ll>> a(h, vector<ll>(w));
    rep(i, h){
        rep(j, w){
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> cum(h+1, vector<ll>(w+1));
    rep(i, h){
        rep(j, w){
            cum[i+1][j+1] = cum[i+1][j] + cum[i][j+1] - cum[i][j] + a[i][j];
        }
    }

    int ans = 0;
    rep(a, h){
        rep(b, w){
            REP(p, a+1, h+1){
                REP(q, b+1, w+1){
                    ll cost = cum[p][q] - cum[a][q] - cum[p][b] + cum[a][b];
                    cost += (p-a)*(q-b)*k;
                    if(cost <= v){
                        ans = max(ans, (p-a)*(q-b));
                    }
                }
            }
        }
    }
    cout << ans << endl;


    return 0;
}