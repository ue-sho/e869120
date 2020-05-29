// タクシー (Taxis)
// 解説見た気がする
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

void dijkstra(const vector<vector<edge>>& edges, vector<int>& distance, int start_point) {
    distance[start_point] = 0;

    // P -> first : 最短距離, second : 頂点の番号
    priority_queue<P, vector<P>, greater<P>> que;
    que.emplace(0, start_point);

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int next = p.second;
        if (distance[next] < p.first){
            continue;
        }
        for(const auto e : edges[p.second]){
            if(distance[e.to] > distance[next] + e.cost){
                distance[e.to] = distance[next] + e.cost;
                que.emplace(distance[e.to], e.to);
            }
        }
    }
}

signed main() {

    int n, k;
    cin >> n >> k;
    vector<int> c(n), r(n);
    rep(i, n){
        cin >> c[i] >> r[i];
    
    }
    vector<vector<int>> graph(n);
    rep(i, k){
        int a, b;
        cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    vector<vector<edge>> edges(n);
    
    rep(i, n){
        queue<int> q;
        vector<int> distance(n, -1);

        q.push(i);
        distance[i] = 0;

        while(!q.empty()){
            int u = q.front(); q.pop();
            if(distance[u] >= r[i]){
                continue;
            }
            for(auto v : graph[u]){
                if(distance[v] == -1){
                    distance[v] = distance[u] + 1;
                    edges[i].emplace_back((edge){v, c[i]});
                    q.push(v);
                }
            }
        }
    }
    
    vector<int> distance(n, 1LL << 60);
    
    dijkstra(edges, distance, 0);
    
    cout << distance[n-1] << endl;
    
    return 0;
}
