// Buildings are Colorful!
// 所要時間 40分くらい (5WA)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    
    int ans = LLONG_MAX;
    rep(bit, 1<<n){
        int cnt = 0;
        vector<int> used(n);
        rep(i, n){
            if(bit & (1 << i)){
                cnt++;
                used[i] = true;
            }
        }
        
        if(cnt < k){
            continue;
        } 
      
        int base = a[0];
        int tmp = 0;
        REP(i, 1, n){
            if(used[i] && a[i] <= base){
                tmp += base - a[i] + 1;
                base += 1;
            }
            base = max(base, a[i]);
        }
        ans = min(ans, tmp);
    }
    
    cout << ans << endl;
    
    return 0;
}
