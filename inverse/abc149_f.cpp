// Surrounded Nodes
// 所要時間 x分
// ほんとに何もわからん
// 解説見ても理解できない
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

constexpr int mod = 1000000007;
class mint {
public:
    ll x;
    constexpr mint(long long x=0) : x((x % mod + mod) % mod) {}
    constexpr mint operator-() const { 
      return mint(-x);
    }
    constexpr mint& operator+=(const mint a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    constexpr mint& operator-=(const mint a) {
        if ((x += mod-a.x) >= mod) x -= mod;
        return *this;
    }
    constexpr mint& operator*=(const mint a) {
        (x *= a.x) %= mod;
        return *this;
    }
    constexpr mint operator+(const mint a) const {
        mint res(*this);
        return res+=a;
    }
    constexpr mint operator-(const mint a) const {
        mint res(*this);
        return res-=a;
    }
    constexpr mint operator*(const mint a) const {
        mint res(*this);
        return res*=a;
    }
    constexpr mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t>>1);
        a *= a;
        if (t&1) a *= *this;
        return a;
    }
    constexpr mint inv() const {
        return pow(mod-2);
    }
    constexpr mint& operator/=(const mint a) {
        return (*this) *= a.inv();
    }
    constexpr mint operator/(const mint a) const {
        mint res(*this);
        return res/=a;
    }
    friend ostream& operator<<(ostream& os, const mint& a){
        os << a.x;
        return os;
    }
};

ll n;
vector<vector<int>> graph;

mint ans;

int dfs(int v, int pre = -1){
    int ret = 1;
    vector<int> ts;
    for(auto u : graph[v]){
        if(u == pre){
            continue;
        }
        int t = dfs(u, v);
        ret += t;
        ts.push_back(t);
    }
    if(pre != -1){
        ts.push_back(n-ret);
    }
    mint now = mint(2).pow(n-1)-1;
    for(int t : ts){
        now -= mint(2).pow(t)-1;
    }
    ans += now;
    return ret;
}

int main() {

    cin >> n;
    graph.resize(n);
    rep(i, n-1){
        int a, b;
        cin >> a >> b;
        --a; --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(0);
    ans /= mint(2).pow(n);
    cout << ans << endl;

    return 0;
}
