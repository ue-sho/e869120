#include<iostream>
#include<vector>
using namespace std;

// 動的計画法
void fibonacci_init(vector<int>& fib, const int n){
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i <= n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}

// メモ化再帰
int fibonacci(vector<int>& fib, int n){
    if(n == 0 || n == 1){
        return fib[n] = 1;
    }
    if(fib[n] != 0){
        return fib[n];
    }
    return fib[n] = fibonacci(fib, n - 2) + fibonacci(fib, n - 1);
}

int main() {

    int n;
    cin >> n;

    vector<int> fib(n+1);

    fibonacci_init(fib, n);
    cout << fib[n] << endl;

    //cout << fibonacci(fib, n) << endl;  // メモ化再帰ver

    return 0;
}