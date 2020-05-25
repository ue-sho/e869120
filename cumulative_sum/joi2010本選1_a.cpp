// 旅人
// 所要時間 11分 (1WA)
// mod 取り忘れた
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;
const int mod = 1e5;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> s(n-1);
    rep(i, n-1){
        cin >> s[i];
    }
    vector<int> a(m);
    rep(i, m){
        cin >> a[i];
    }

    vector<int> cum(n);
    rep(i, n-1){
        cum[i+1] = cum[i] + s[i];
    }

    int ans = 0;
    int now = 0;
    rep(i, m){
        ans += abs(cum[now+a[i]]-cum[now]);
        now += a[i];
        ans %= mod;
    }
    cout << ans << endl;
    
    return 0;
}