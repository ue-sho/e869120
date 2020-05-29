// finals-本選会場
// 解説見た
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

struct edge {
    int to;
    int cost;
};

vector<int> prim(vector<vector<edge>>& edges, int V) {
    vector<int> res;
    vector<bool> used(V, false);
    // P -> first : コスト, second : 行先
    priority_queue<P, vector<P>, greater<P>> que;
    que.emplace(0, 0);
    // コストが小さい順に出しいく
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        if(used[p.second]){
            continue;
        }
        used[p.second] = true;
        res.push_back(p.first);
        for(const auto e : edges[p.second]){
            if(!used[e.to]){
                que.emplace(e.cost, e.to);
            }
        }
    }
    return res;
}

signed main() {

    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<edge>> edges(n);
    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        --a; --b;
        edges[a].emplace_back((edge){b, c});
        edges[b].emplace_back((edge){a, c});
    }
    
    auto a = prim(edges, n);
    
    sort(a.rbegin(), a.rend());
    
    int ans = 0;
    for(auto x : a){
        ans += x;
    }
    // コストが大きいものからk-1個引いていくと
    // k個の最小木ができる
    rep(i, k-1){
        ans -= a[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
