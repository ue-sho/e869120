// 船旅
// 自力AC！
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

// vector<int> distance(n, INT_MAX); //infで初期化する必要がある

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
    vector<vector<edge>> edges(n);
    rep(i, k){
        int com;
        cin >> com;
        if(com == 0){
            int a, b;
            cin >> a >> b;
            --a; --b;
            vector<int> distance(n, INT_MAX); 
            dijkstra(edges, distance, a);
            if(distance[b] != INT_MAX){
                cout << distance[b] << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        else if(com == 1){
            int c, d, e;
            cin >> c >> d >> e;
            --c; --d;
            edges[c].emplace_back(edge{d, e});
            edges[d].emplace_back(edge{c, e});
        }
    }
        
    return 0;
}
