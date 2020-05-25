// Breadth First Search
// 所要時間 10分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

int main() {

    int n;
    cin >> n;
    vector<vector<int> > graph(n);
    rep(i, n){
        int u, k;
        cin >> u >> k;
        --u;
        rep(j, k){
            int v;
            cin >> v;
            graph[u].push_back(--v);
        }
    }

    queue<int> q;
    vector<int> dis(n, -1);
    q.push(0);
    dis[0] = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        rep(i, graph[v].size()){
            int u = graph[v][i];
            if(dis[u] == -1){
                dis[u] = dis[v] + 1;
                q.push(u);
            }
        }
    }

    rep(i, n){
        cout << i+1 << " " << dis[i] << endl;
    }

    return 0;
}