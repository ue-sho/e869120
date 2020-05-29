// Pollock's conjecture
// 自力できなかった
#include <bits/stdc++.h>
using namespace std;
#define int             long long
#define rep(i, n)       for(int i=0; i<(n); ++i)
#define REP(i, d, n)    for(int i=(d); i<(n); ++i)
#define all(v)          v.begin(), v.end()
using P = pair<int, int>;

template<class T> 
inline bool chmax(T &a, const T &b){
    if(a < b){
        a = b;
        return true;
    }
    return false;
}

template<class T> 
inline bool chmin(T &a, const T &b){
    if(a > b){
        a = b;
        return true;
    }
    return 0;
}

signed main() {

    vector<int> tetra;
    for(int i = 1; ; ++i){
        int p = i*(i+1)*(i+2) / 6;  // 連続する3つの整数の積は6の倍数なので必ず割り切れる
        if(p > 1e6){
            break;
        }
        tetra.push_back(p);
    }
    int m = tetra.size();
    
    vector<int> dp(1e6 + 1, 1LL << 60), dp_odd(1e6 + 1, 1LL << 60);
    dp[0] = 0;
    dp_odd[0] = 0;
    rep(i, 1e6+1){
        rep(j, m){
            if(i + tetra[j] >= 1e6){
                break;
            }
            chmin(dp[i+tetra[j]], dp[i]+1);
            if(tetra[j] % 2){   // 正四面体数が奇数の時
                chmin(dp_odd[i+tetra[j]], dp_odd[i]+1);
            }
        }
    }
    
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        cout << dp[n] << ' ' << dp_odd[n] << '\n';
    }
    return 0;
}