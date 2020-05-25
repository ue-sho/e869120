// How many ways?
// 所要時間 5分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

int main() {

    while(true){
        int n, x;
        cin >> n >> x;
        if(n == 0 && x == 0){
            break;
        }
        int cnt = 0;
        for(int i=1; i<n-1; ++i){
            for(int j=i+1; j<n; ++j){
                int dif = x - i - j;
                if(dif > j && dif <= n){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}