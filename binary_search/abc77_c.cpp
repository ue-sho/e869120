// Snuke Festival
// 所要時間 22分
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
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    vector<int> b(n);
    rep(i, n){
        cin >> b[i];
    }    
    vector<int> c(n);
    rep(i, n){
        cin >> c[i];
    }
    sort(all(a));
    sort(all(b));
    sort(all(c));
    
    ll ans = 0;
    rep(i, n){
        auto iter1 = lower_bound(all(a), b[i]);
        auto iter2 = upper_bound(all(c), b[i]);
        ans += (ll) ((iter1 - a.begin()) * (c.end() - iter2));
    }
    cout << ans << endl;

    return 0;
}