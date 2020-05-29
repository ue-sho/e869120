// 単一始点最短距離
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int v, e, r;
    cin >> v >> e >> r;
    vector<vector<P>> graph(v);
    rep(i, e){
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].emplace_back(t, d);
    }

    priority_queue<P, vector<P>, greater<P>> q;
    vector<int> dis(v, 1e18);
    dis[r] = 0;
    q.push({0, r});

    while (!q.empty()) {
        P p = q.top();
        q.pop();
        int v = p.second;
        if (dis[v] < p.first){
            continue;
        }
        for(auto e : graph[v]) {
            int to = e.first;
            int cost = e.second;
            if (dis[to] > dis[v] + cost) {
                dis[to] = dis[v] + cost;
                q.push({dis[to], to});
            }
        }
    }

    rep(i, v){
        if(dis[i] == 1e18){
            cout << "INF" << endl;
        }
        else{
            cout << dis[i] << endl;
        }
    }

    return 0;
}