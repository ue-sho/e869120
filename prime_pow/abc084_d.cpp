// 2017-like Number
// 所要時間 28分 (2TLE)
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

    vector<bool> prime(100001, true);
    prime[0] = false;
    prime[1] = false;
    for(int i=2; i*i<=100000; ++i){
        if(prime[i]){
            for(int x=i*2; x<=100000; x+=i){
                prime[x] = false;
            }
        }
    }

    vector<int> s(100001);
    for(int i=2; i<=100000; i++){
        s[i] = s[i-1];
        if((i+1) % 2 != 0){
            continue;
        }
        if(prime[i] && prime[(i+1)/2]){
            s[i]++;
        }
    }

    vector<int> ans(n);
    rep(i, n){
        int l, r;
        cin >> l >> r;
        ans[i] = s[r] - s[l-1];
    }

    rep(i, n){
        cout << ans[i] << endl;
    }

    return 0;
}