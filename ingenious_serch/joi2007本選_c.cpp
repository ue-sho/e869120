// 最古の遺跡
// 所要時間 ×分
// n*n*log(n) は制限時間オーバーだと思ってしまった
// mapでやるとTLE　setだとAC
// setで二分探索するほうが圧倒的に早い？
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
    vector<P> vp;
    set<P> st;
    rep(i, n){
        int a, b;
        cin >> a >> b;
        vp.emplace_back(a, b);
        st.insert({a, b});
    }
    sort(all(vp));

    int ans = 0;
    rep(i, n-1){
        P pi = vp[i];
        for(int j=i+1; j<n; ++j){
            P pj = vp[j];
            int x = pj.first - pi.first;
            int y = pj.second - pi.second;
            P p1 = {pj.first-y, pj.second+x};
            P p2 = {pi.first-y, pi.second+x};
            if(p1 == *st.lower_bound(p1) && p2 == *st.lower_bound(p2)){
                ans = max(ans, x*x + y*y);
            }
        }
    }
    cout << ans << endl;

    return 0;
}