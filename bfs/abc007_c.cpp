// 幅優先探索
// 所要時間 13分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--;
    vector<vector<char>> graph(r, vector<char>(c));
    rep(i, r){
        rep(j, c){
            cin >> graph[i][j];
        }
    }

    queue<P> q;
    vector<vector<int>> dis(r, vector<int>(c, -1));
    q.push({sy, sx});
    dis[sy][sx] = 0;

    constexpr int dy[] = {1, 0, -1, 0};
    constexpr int dx[] = {0, 1, 0, -1};

    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        rep(i, 4){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= r || nx > c){
                continue;
            }
            if(graph[ny][nx] == '#'){
                continue;
            }
            if(dis[ny][nx] == -1){
                dis[ny][nx] = dis[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }

    cout << dis[gy][gx] << endl;

    return 0;
}