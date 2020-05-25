// イルミネーション (Illumination)
// 所要時間 分
// まじで何も思いつかない
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int h, w;
    cin >> w >> h;
    vector<vector<int>> graph(h+2, vector<int>(w+2)); //周りは0埋めする
    for(int i = 1; i <= h; ++i){
        for(int j = 1; j <= w; ++j){
            cin >> graph[i][j];
        }
    }	
    
    // 地図の外側に余白を設け余白とそれに隣接している建物のない領域を探す
    // 建物じゃないところをたどっていく
    vector<vector<bool>> visit(h+2, vector<bool>(w+2)); 
    queue<P> q;	
    q.push({0, 0}); // 0埋めしているので{0, 0}は絶対に建物じゃない
	
    int ans = 0;
    const int dy[6] =      {0, 1, 1, 0, -1, -1};
    const int dx[2][6] = { {1, 1, 0, -1, 0, 1}, 
                           {1, 0, -1, -1, -1, 0} }; //行く先
    int idx = 0;    // dx の切り替え
	while(!q.empty()){
		int y = q.front().first;
        int x = q.front().second;
        q.pop();
 
        if(visit[y][x]){
            continue;
        }
        visit[y][x] = true;

        if(y % 2 == 1){ // 行く先切り替え
            idx = 0;
        }
        else{
            idx = 1;
        }
 
		rep(i, 6){ 
			int ny = y + dy[i];
            int nx = x + dx[idx][i];
 
			if(ny < 0 || nx < 0 || ny > h+1 || nx > w+1){
                continue;
            }
			if(visit[ny][nx]){
                continue;
            }
			if(graph[ny][nx] == 1){
				// 建物じゃないところから建物に入ったら、そこはイルミネーションをつける
                ans++;
                continue;
			}
			q.push({ny, nx});
		}
	}
    cout << ans << endl;

    return 0;
}