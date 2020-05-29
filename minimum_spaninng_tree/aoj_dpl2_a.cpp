// Minimum Spanning Tree
// やるだけ
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

struct edge{
    int to;
    int cost;
};

int prim(vector<vector<edge>>& edges, int V) {
    int res = 0;
    using P = pair<int, int>;
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

int main() {

	int v, e;
	cin >> v >> e;
    vector<vector<edge>> edges(v);
	rep(i, e){
		int s, t, w;
		cin >> s >> t >> w;
		edges[s].emplace_back((edge){t, w});
		edges[t].emplace_back((edge){s, w});
	}

    cout << prim(edges, v) << endl;

    return 0;
}