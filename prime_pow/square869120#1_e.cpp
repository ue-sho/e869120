// 散歩 (E869120 and Path Length)
// 所要時間 27分 (1WA)
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

constexpr int mod = 1000000007;
ll mod_pow(ll x, ll n){
    ll ret = 1;
    while(n > 0){
        if(n & 1){
            ret *= x;
            ret %= mod;
        }
        x *= x;
        x %= mod;
        n >>= 1;
    }
    return ret;
}

int main() {

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), c(q);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, q){
        cin >> c[i];
    }

    vector<ll> dis(n-1);
    for(int i=1; i<n; ++i){
        dis[i-1] = mod_pow(a[i-1], a[i]);
    }
    vector<ll> d(n);
    for(int i=1; i<n; ++i){
        d[i] = (dis[i-1] + d[i-1]);
    }
    ll ans = 0;
    int now = 1;
    rep(i, q){
        int a = c[i]-1;
        int b = now -1;
        if(a < b){
            swap(a, b);
        }
        ans += d[a] - d[b];
        ans %= mod;
        now = c[i];
    }
    ans += d[now-1];
    ans %= mod;
    cout << ans << endl;

    return 0;
}