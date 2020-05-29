// ゾンビ島 (Zombie Island)
// 自力AC！
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int n, m, k, s;
    cin >> n >> m >> k >> s;
    int p, q;
    cin >> p >> q;
    
    vector<vector<int>> graph(n);
    vector<int> zombi(k);
    vector<int> ng(n);
    rep(i, k){
        int c;
        cin >> c;
        --c;
        zombi[i] = c;
        ng[c] = true;
    }
    rep(i, m){
        int a, b;
        cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }
    
    vector<bool> kiken(n);
    rep(i, k){
        queue<int> q;
        vector<int> distance(n, -1);

        q.push(zombi[i]);
        distance[zombi[i]] = 0;

        while(!q.empty()){
            int u = q.front(); q.pop();
            for(auto v : graph[u]){
                if(distance[v] == -1 && distance[u] < s){
                    distance[v] = distance[u] + 1;
                    kiken[v] = true;
                    q.push(v);
                }
            }
        }
    }
    
    
    vector<long long> dis(n, (1LL << 60));
    dis[0] = 0;

    // P -> first : 最安値, second : 頂点の番号
    priority_queue<P, vector<P>, greater<P>> que;
    que.emplace(0, 0);

    while (!que.empty()) {
        P x = que.top();
        que.pop();
        int node = x.second;
        if (dis[node] < x.first){
            continue;
        }
        for(const auto to : graph[node]){
            if(ng[to]){
                continue;
            }
            int cost;
            if(to== n-1){
                cost = 0;
            }
            else if(kiken[to]){
                cost = q;
            }
            else{
                cost = p;
            }
            if(dis[to] > dis[node] + cost){
                dis[to] = dis[node] + cost;
                que.emplace(dis[to], to);
            }
        }
    }
    cout << dis[n-1] << endl;
    
    return 0;
}
