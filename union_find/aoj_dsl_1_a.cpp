// Disjoint Set: Union Find Tree
// 所要時間 6分
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
    UnionFind(int n = 0) : d(n, -1) {}
    // 経路縮約を行いながら根を探す メモ化再帰
    int find(int x) {
        if(d[x] < 0){
            return x;
        }
        return d[x] = find(d[x]);
    }
    // 小さいほうにくっつける
    bool unite(int x, int y) {  // boolにしているのは、Minumum Spaning Tree(クラスカル法)の時便利
        x = find(x); 
        y = find(y);
        if(x == y){
            return false;
        }
        if(size(x) < size(y)){
            swap(x,y);
        } 
        d[x] += d[y];
        d[y] = x;
        return true;
    }
    bool same(int x, int y) { 
        return find(x) == find(y);
    }
    int size(int x) { 
        return -d[find(x)];
    }
};

int main() {

    int n, q;
    cin >> n >> q;

    UnionFind uf(n);

    rep(i, q){
        int com, x, y;
        cin >> com >> x >> y;
        if(com == 0){
            uf.unite(x, y);
        }
        else{
            cout << uf.same(x, y) << endl;
        }
    }

    return 0;
}