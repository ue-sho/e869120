// ピザ
// 所要時間 20分
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

int main() {

    int d, n, m;
    cin >> d >> n >> m;
    vector<int> a;
    a.push_back(0);
    a.push_back(d);
    rep(i, n-1){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(all(a));
    int ans = 0;
    rep(i, m){
        int k;
        cin >> k;
        auto iter = upper_bound(all(a), k);
        ans += min(*iter-k, k-*(iter-1));
    }
    cout << ans << endl;

    return 0;
}