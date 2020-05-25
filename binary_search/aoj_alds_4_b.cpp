// Binary Search
// 所要時間 3分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
int main() {

    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n){
        cin >> s[i];
    }
    sort(all(s));
    int q;
    cin >> q;
    vector<int> t(q);
    int ans = 0;
    rep(i, q){
        cin >> t[i];
        if(t[i] == *lower_bound(all(s), t[i])){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}