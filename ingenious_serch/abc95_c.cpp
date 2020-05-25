// Half and Half
// 所要時間 10分 (3WA)
// 条件分岐を間違えていた
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = 0;
    if(a + b > 2 * c){
        ans += min(x, y) * 2 * c;
        if(x > y){
            x -= y;
            y = 0;
            if(a * x < 2 * c * x){
                ans += a * x;
            }
            else{
                ans += 2 * c * x;
            }
        }
        else{
            y -= x;
            x = 0;
            if(b * y < 2 * c * y){
                ans += b * y;
            }
            else{
                ans += 2 * c * y;
            }
        }
    }
    else{
        ans += x * a + y * b;
    }
    cout << ans << endl;

    return 0;
}