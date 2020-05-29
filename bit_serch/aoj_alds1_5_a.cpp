// Exhaustive Search
// 所要時間 10分くらい？
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using P = pair<int, int>;

signed main() {

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    
    vector<int> res;
    rep(bit, 1<<n){
        int sum = 0;
        rep(j, n){
            if(bit & (1 << j)){
                sum += a[j];        
            }
        }
        res.push_back(sum);
    }
    sort(all(res));
    
    int q;
    cin >> q;
    rep(i, q){
        int m;
        cin >> m;
        auto it = lower_bound(all(res), m);
        if(it != res.end() && *it == m){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    
    return 0;
}
