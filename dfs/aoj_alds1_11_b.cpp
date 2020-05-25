// Depth First Search
// 所要時間 分くらい
// 細かいミスがあった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

int t = 0;
vector<vector<int> > graph;
vector<pair<int, int> > ans;
vector<bool> visit;

void dfs(int node, int pre = -1){
    if(visit[node]){
        return;
    }
    visit[node] = true;
    t++;
    ans[node].first = t;
    for(int i=0; i<graph[node].size(); ++i){
        dfs(graph[node][i], node);
    }
    t++;
    ans[node].second = t;
}

int main() {

    int n;
    cin >> n;
    graph.resize(n);
    ans.resize(n);
    visit.resize(n);
    rep(i, n){
        int u, k;
        cin >> u >> k;
        --u;
        rep(j, k){
            int v;
            cin >> v;
            --v;
            graph[u].push_back(v);  
        }
    }

    rep(i, n){
        dfs(i);
    }

    rep(i, n){
        cout << i+1 << " " << ans[i].first << " " << ans[i].second << endl;
    }

    return 0;
}