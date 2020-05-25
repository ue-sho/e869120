// ダーツ
// 所要時間 分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n;
    ll m;
    cin >> n >> m;
    vector<ll> p(n+1);
    for(int i=1; i<=n; ++i){
        cin >> p[i];
    }

    vector<ll> pattern((n+1)*(n+1));
    rep(i, n+1){
        rep(j, n+1){
            pattern[i*(n+1) + j] = pattern[i] + p[j];
        }
    }
    sort(all(pattern));

    ll ans = 0;
    rep(i, (n+1)*(n+1)){
        ll tmp = m - pattern[i];
        if(tmp >= 0){
            auto iter = lower_bound(all(pattern), tmp);
            if(iter != pattern.end()){
                ans = max(ans, pattern[i] + *(iter-1));
            }
        }
    }

    cout << ans  << endl;

    return 0;
}