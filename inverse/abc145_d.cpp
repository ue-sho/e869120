// Knight
// 所要時間 分
// まじでわからん 2回目だけど解けなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

const ll mod = 1000000007;

ll fact(ll n){
    ll ret = 1;
    for(ll i=2; i<=n; ++i){
        ret *= i;
        ret %= mod;
    }
    return ret;
}

ll mod_inv(ll a){
    ll b = mod, u = 1, v = 0;
    while(b){
        ll t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= mod;
    if (u < 0){
        u += mod;
    }
    return u;
}

int main() {

    int x, y;
    cin >> x >> y;

    if((x + y) % 3 != 0){
        cout << 0 << endl;
        return 0;
    }

    ll n = (2*y-x) / 3;
    ll m = (2*x-y) / 3;
    if(n < 0 || m < 0){
        cout << 0 << endl;
        return 0;
    }

    ll ans = fact(m+n);
    ll a = fact(m);
    ll b = fact(n);
    ans *= mod_inv(a*b);

    cout << ans % mod << endl;
    
    return 0;
}