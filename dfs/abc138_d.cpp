// Ki
// 所要時間 25分 (1WA)
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

vector<vector<int>> graph;
vector<int> cost, ans;

void dfs(int v, int c = 0, int pre = -1){
    c += cost[v];
    ans[v] += c;
    for(auto u : graph[v]){
        if(u == pre){
            continue;
        }
        dfs(u, c, v);
    }
}

int main() {

    int n, q;
    cin >> n >> q;
    graph.resize(n);
    cost.resize(n);
    ans.resize(n);
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    rep(i, q){
        int p, x;
        cin >> p >> x;
        cost[--p] += x;
    }
    dfs(0);

    rep(i, n){
        cout << ans[i] << " ";
    }

    return 0;
}