// ATCoder
// 所要時間 2分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    string s;
    cin >> s;
    
    int ans = 0;
    int cnt = 0;
    rep(i, s.length()){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
            cnt++;
        }
        else{
            cnt = 0;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}