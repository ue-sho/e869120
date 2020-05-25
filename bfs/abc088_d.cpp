// Grid Repainting
// 所要時間 12分 (1WA)
// 最後の条件分岐書き忘れた
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int h, w;
    cin >> h >> w;
    vector<vector<char>> graph(h, vector<char>(w));
    int cnt = 0;
    rep(i, h){
        rep(j, w){
            cin >> graph[i][j];
            if(graph[i][j] == '.'){
                cnt++;
            }
        }
    }

    queue<P> q;
    vector<vector<int>> dis(h, vector<int>(w, -1));
    q.push({0, 0});
    dis[0][0] = 1;

    const int dy[] = {1, 0, -1, 0};
    const int dx[] = {0, 1, 0, -1};
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        rep(i, 4){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= h || nx >= w){
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
    if(dis[h-1][w-1] == -1){
        cout << -1 << endl;
    }
    else{
        cout << cnt - dis[h-1][w-1] << endl;
    }

    return 0;
}