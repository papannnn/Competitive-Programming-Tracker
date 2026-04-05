#include <bits/stdc++.h>

using namespace std;
// O(1)
long long f(long long n) {
    return n * n + 2 * n + 3;
}

int main () {
    long long n;
    cin >> n;
    cout << f(f(f(n) + n) + f(f(n))) << endl;
}