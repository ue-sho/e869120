// 釘 (Nails)
// 所要時間 x分
// 全くわからなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n, m;
    cin >> n >> m;
    // for文 i = n+2 の時、j = n+2 + 2 までとるので n+5の二次元配列 
    vector<vector<int>> graph(n+5, vector<int>(n+5));
    rep(i, m){
        int a, b, x;
        cin >> a >> b >> x;
		++graph[a][b];                  //頂点
		--graph[a][b + 1];              //横の時　 graph[a][b]を打ち消す
		--graph[a + x + 1][b];          //縦の時　 graph[a][b]を打ち消す
		++graph[a + x + 1][b + x + 2];  //斜めの時 graph[a][b+1]を打ち消す
		++graph[a + x + 2][b + 1];      //斜めの時 graph[a+x+1][b]を打ち消す
		--graph[a + x + 2][b + x + 2];  //斜めの時 graph[a][b]を打ち消す
	}

    // 斜め
	for(int i = 1; i <= n + 2; ++i){
        for(int j = 1; j <= i + 2; ++j){
		    graph[i][j] += graph[i-1][j-1];
        }
	}

    // 縦
	for(int i = 1; i <= n + 2; ++i){
        for(int j = 1; j <= i + 2; ++j){
		    graph[i][j] += graph[i-1][j];
        }
	}

    // 横
	for(int i = 1; i <= n + 2; ++i){
        for(int j = 1; j <= i + 2; ++j){
		    graph[i][j] += graph[i][j-1];
        }
	}

	int ans = 0;
	for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
		    if (graph[i][j]) {
			    ++ans;
		    }
        }
	}
	cout << ans << endl;

    return 0;
}