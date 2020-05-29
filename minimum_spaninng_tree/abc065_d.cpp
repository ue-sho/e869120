// Built?
// わからなかった
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

int prim(vector<vector<edge>>& edges, int V) {
    int res = 0;
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
        res += p.first;
        for(const auto e : edges[p.second]){
            if(!used[e.to]){
                que.emplace(e.cost, e.to);
            }
        }
    }
    return res;
}

signed main() {

    int n;
    cin >> n;
    vector<vector<edge>> edges(n);
    vector<pair<P, int>> point(n);
    rep(i, n){
        int x, y;
        cin >> x >> y;
        point[i] = {{x, y}, i};
    }
    
    // x sort
    sort(all(point));
    rep(i, n-1){
        int cost_x = abs(point[i].first.first - point[i+1].first.first);
        edges[point[i].second].emplace_back(edge{point[i+1].second, cost_x});
        edges[point[i+1].second].emplace_back(edge{point[i].second, cost_x});
    }
    
    // x と y を入れ替える
    for(auto &e : point){
        swap(e.first.first, e.first.second);
    }
    
    // y sort
    sort(all(point));
    rep(i, n-1){
        int cost_y = abs(point[i].first.first - point[i+1].first.first);
        edges[point[i].second].emplace_back(edge{point[i+1].second, cost_y});
        edges[point[i+1].second].emplace_back(edge{point[i].second, cost_y});
    }
    
    cout << prim(edges, n) << endl;

    return 0;
}
