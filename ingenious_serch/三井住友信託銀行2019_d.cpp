// Lucky PIN
// 所要時間 29分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for(int i = 0; i<=999; ++i){
        string t = to_string(i);
        if(t.size() == 2){
            t = "0" + t;
        }
        else if(t.size() == 1){
            t = "00" + t;
        }
        int idx = 0;
        rep(j, s.size()){
            if(t[idx] == s[j]){
                idx++;
            }
            if(idx == 3){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}