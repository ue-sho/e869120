// ムーアの法則
// 所要時間 分
// 微分もできないし、三分探索もわからなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define REP(i, d, n) for(int i=(d); i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using P = pair<int, int>;

double p;
// 目的関数(最小化したい)
double f(double x) {
    return x + p / pow(2, x / 1.5);
};

int main() {

    cin >> p;

    // 左側
    double ng = 0;
    // 右側
    double ok = 1e9;

    // 500回繰り返す(適当回数)
    int cnt = 500;
    while (cnt--) {
        double c1 = (ng * 2 + ok) / 3;
        double c2 = (ng + ok * 2) / 3;

        // もしf(c2)のほうが良い(小さい)なら、駄目な方lowを更新する
        if (f(c1) > f(c2)) ng = c1;
        else ok = c2;
    }

    // 近似されるのでf(ok) でも f(ng)　でもどちらでもよい
    cout << fixed << setprecision(10) << f(ok) << endl;

    return 0;
}