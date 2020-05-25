// 射撃王
// 所要時間 x分
// 解けなかった
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
    vector<ll> h(n), s(n);
    rep(i, n){
        cin >> h[i] >> s[i];
    }

    // めぐる式二分探索
    ll ng = -1, ok = LLONG_MAX-1;
    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;

        bool flag = true;
        vector<ll> time(n);
        rep(i, n){
            // すでに mid よりも高い位置に風船 i がある場合は不可能
            if (mid < h[i]){
                flag = false;
            }
            // (mid - h[i]) / s[i] 秒以内に風船を割れるとok
            time[i] = (mid - h[i]) / s[i];
        }
        sort(all(time));
        rep(i, n){
            // i 秒が time[i](制限時間) を超えると失敗
            if(time[i] < i){
                flag = false;
            }
        }
        if(flag){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }
    cout << ok << endl;

    return 0;
}