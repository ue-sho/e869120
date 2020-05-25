// 島はいくつある？
// 所要時間 30分くらい
// デバックに時間がかかってしまった（h, w が逆だった）
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

const int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int dfs(int i, int j, vector<vector<int> >& graph, vector<vector<int> >& visit, const int h, const int w){
    if(visit[i][j] == 1 || graph[i][j] == 0){
        return 0;
    }
    visit[i][j] = 1;
    rep(k, 8){
        int di = i + x[k];
        int dj = j + y[k];
        if(di < 0 || dj < 0 || di >= h || dj >= w){
            continue;
        }
        dfs(di, dj, graph, visit, h, w);
    }
    return 1;
}

int main() {

    while(true){
        int w, h;
        cin >> w >> h;
        if(w == 0 && h == 0){
            break;
        }
        vector<vector<int> > graph(h, vector<int>(w)); 
        rep(i, h){
            rep(j, w){
                cin >> graph[i][j];
            }
        }
        vector<vector<int> > visit(h, vector<int>(w));
        int ans = 0;
        rep(i, h){
            rep(j, w){
                ans += dfs(i, j, graph, visit, h, w);
            }
        }
        cout << ans << endl;
    }

    return 0;
}