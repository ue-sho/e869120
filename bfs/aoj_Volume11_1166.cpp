// 迷図と命ず
// 所要時間 53分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

int main() {

    int w, h;
    while(true){
        cin >> w >> h;
        if(w == 0 && h == 0){
            break;
        }
        vector<vector<int> > graph(h, vector<int>(w));
        vector<vector<int> > tate(h, vector<int>(w-1));
        vector<vector<int> > yoko(h-1, vector<int>(w));
        rep(i, w-1){
            cin >> tate[0][i];
        }
        rep(k, h-1){
            rep(i, w){
                cin >> yoko[k][i];
            }
            rep(i, w-1){
                cin >> tate[k+1][i];
            }
        }

        queue<pair<int, int> > q;
        vector<vector<int> > dis(h, vector<int>(w, -1));
        q.push({0, 0});
        dis[0][0] = 1;
        const int dy[] = {0, 1, 0, -1};
        const int dx[] = {1, 0, -1, 0};
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
                if(abs(ny - y) == 1 && yoko[min(y, ny)][nx] == 1){
                    continue;
                }
                if(abs(nx - x) == 1 && tate[ny][min(x, nx)] == 1){
                    continue;
                }
                if(dis[ny][nx] == -1){
                    dis[ny][nx] = dis[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }        
        if(dis[h-1][w-1] != -1){
            cout << dis[h-1][w-1] << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    return 0;
}