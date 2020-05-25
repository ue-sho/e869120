// 105
// 所要時間 8分
// 約数の意味を勘違いした
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n;
    cin >> n;

    int ans = 0;
    for(int i=1; i<=n; i+=2){
        int cnt = 0;
        for(int j=1; j<=i; ++j){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 8){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}