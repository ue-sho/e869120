// チーズ (Cheese)
// 所要時間 39分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> graph(h, vector<char>(w));
    vector<P> place(n);
    int si, sj;
    rep(i, h){
        rep(j, w){
            cin >> graph[i][j];
            if(graph[i][j] == 'S'){
                si = i;
                sj = j;
            }
            else if(graph[i][j] != 'X' && graph[i][j] != '.'){
                place[graph[i][j] - '0' - 1] = {i, j};
            }
        }
    }

    constexpr int ai[] = {0, 1, 0, -1};
    constexpr int aj[] = {1, 0, -1, 0};
    int ans = 0;
    rep(i, n){
        queue<P> q;
        vector<vector<int>> dis(h, vector<int>(w, -1));
        if(i != 0){
            q.push(place[i-1]);
            dis[place[i-1].first][place[i-1].second] = 0;
        }
        else{
            q.push({si, sj});
            dis[si][sj] = 0;
        }
        
        while(!q.empty()){
            int ny = q.front().first;
            int nx = q.front().second;
            q.pop();
            if((graph[ny][nx] - '0') == (i + 1)){
                ans += dis[ny][nx];
                break;
            }
            rep(j, 4){
                int y = ny + ai[j];
                int x = nx + aj[j];
                if(x < 0 || y < 0 || x >= w || y >= h){
                    continue;
                }
                if(graph[y][x] == 'X'){
                    continue;
                }
                if(dis[y][x] == -1){
                    dis[y][x] = dis[ny][nx] + 1;
                    q.push({y, x});
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}