// 経路
// 所要時間 分
// 解けなかった　コンビネーション忘れてた
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

    ll w, h;
    cin >> w >> h;
    --w; --h;

    ll ans = fact(w+h);
    ll a = fact(h);
    ll b = fact(w);
    ans *= mod_inv((a * b));

    cout << ans % mod << endl;

    return 0;
}