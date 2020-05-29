// Building a Space Station
// わからなかった
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()

vector<double> x, y, z, r;

double getdist(int a, int b) {
	double dx = x[a] - x[b];
    double dy = y[a] - y[b];
    double dz = z[a] - z[b];
	double d = sqrt(dx * dx + dy * dy + dz * dz);
	return max(d - (r[a] + r[b]), 0.);
}

double prim(int n) {
    using P = pair<double, int>;
    
    double res = 0.;
    vector<bool> used(n, false);
    // P -> first : コスト, second : 行先
    priority_queue<P, vector<P>, greater<P>> que;
    que.emplace(0., 0);
    // コストが小さい順に出しいく
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        if(used[p.second]){
            continue;
        }
        int pos = p.second;
        used[pos] = true;
        res += p.first;
        for(int i = 0; i < n; ++i){
            if(!used[i] && i != pos){
                que.emplace(getdist(pos, i), i);
            }
        }
    }
    return res;
}

signed main() {

    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        x.resize(n); 
        y.resize(n);
        z.resize(n);
        r.resize(n);
        rep(i, n){
            cin >> x[i] >> y[i] >> z[i] >> r[i];
        }
        cout << fixed << setprecision(3) << prim(n) << endl;
    }
    return 0;
}
