// Decayed Bridges
// 所要時間 分
// 全然わからなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

class UnionFind {
public:
    vector<ll> d;
    UnionFind(ll n) : d(n, -1) {}
    ll find(ll x){
        if(d[x] < 0){
            return x;
        }
        return d[x] = find(d[x]);
    }

    bool unite(ll x, ll y){
        ll a = find(x);
        ll b = find(y);
        if(a == b){
            return false;
        }
        else if(size(a) < size(b)){
            swap(a, b);
        }
        d[a] += d[b];
        d[b] = a;
        return true;
    }

    bool same(ll x, ll y){
        return find(x) == find(y);
    }

    ll size(ll x){
        return -d[find(x)];
    }
};

int main() {

    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    rep(i, m){
        ll x, y;
        cin >> x >> y;
        a[i] = --x;
        b[i] = --y;
    }

    UnionFind uf(n);
    vector<ll> ans(m);
    ans[m-1] = n * (n-1) / 2;
    for(int i=m-2; i>=0; --i){
        if(uf.same(a[i+1], b[i+1])){
            ans[i] = ans[i+1];
        }
        else{
            ans[i] = ans[i+1] - uf.size(a[i+1]) * uf.size(b[i+1]);
            uf.unite(a[i+1], b[i+1]);
        }
    }

    rep(i, m){
        cout << ans[i] << endl;
    }
    return 0;
}