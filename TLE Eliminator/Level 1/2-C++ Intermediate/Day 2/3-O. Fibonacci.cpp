#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
// O(n!)

long long fib(long long n) {
    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main () {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    if (n == 2) {
        cout << 1 << endl;
        return 0;
    }

    long long prev = 0;
    long long curr = 1;
    long long val = 0;
    for (int i = 3; i <= n; i++) {
        val = prev + curr;
        prev = curr;
        curr = val;
    }
    cout << val << endl;
}