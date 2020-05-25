// 薄氷渡り
// 所要時間 60分
// カウントに手間取った
// visitを戻すのを考えていなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;
    
int m, n;
vector<vector<int>> graph;
constexpr int ax[] = {0, 1, 0, -1};
constexpr int ay[] = {1, 0, -1, 0};
int ans = 0;

void dfs(int x, int y, vector<vector<int>>& visit, int cnt){
    if(visit[x][y] || graph[x][y] == 0){
        return;
    }
    visit[x][y] = 1;
    cnt++;
    rep(i, 4){
        int dx = x + ax[i];
        int dy = y + ay[i];
        if(dx < 0 || dy < 0 || dx >= n || dy >= m){
            continue;
        }
        dfs(dx, dy, visit, cnt);
    }
    ans = max(ans, cnt);
    visit[x][y] = 0;
}


int main() {

    cin >> m >> n;

    graph.assign(n, vector<int>(m));
    rep(i, n){
        rep(j, m){
            cin >> graph[i][j];
        }
    }

    rep(i, n){
        rep(j, m){
            vector<vector<int>> visit(n, vector<int>(m));
            dfs(i, j, visit, 0);
        }
    }
    cout << ans << endl;

    return 0;
}