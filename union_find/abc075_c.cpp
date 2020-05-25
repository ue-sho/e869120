// Bridge
// 所要時間 分
// 解説みてしまった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

class UnionFind {
public:
    vector<int> d;
    UnionFind(int n) : d(n, -1) {}
    int find(int x){
        if(d[x] < 0){
            return x;
        }
        return d[x] = find(d[x]);
    }

    bool unite(int x, int y){
        int a = find(x);
        int b = find(y);
        if(a == b){
            return false;
        }
        if(size(a) < size(b)){
            swap(a, b);
        }
        d[a] += d[b];
        d[b] = a;
        return true;
    }

    bool same(int x, int y){
        return find(x) == find(y);
    }

    int size(int x){
        return -d[find(x)];
    }
};

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m){
        int x, y;
        cin >> x >> y;
        a[i] = --x;
        b[i] = --y;
    }

    int ans = 0;
    rep(i, m){
        UnionFind uf(n);
        rep(j, m){
            if(i == j){
                continue;
            }
            uf.unite(a[j], b[j]);
        }
        if(uf.size(0) != n){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}