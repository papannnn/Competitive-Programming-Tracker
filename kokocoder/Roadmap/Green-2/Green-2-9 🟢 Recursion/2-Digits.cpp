#include <bits/stdc++.h>

using namespace std;
// O(log n)
long long f(long long n, long long k, int res) {
    if (n == 0) {
        return res;
    }

    return f(n / k, k, res + 1);
}

int main () {
    int n, k;
    cin >> n >> k;

    cout << f(n, k, 0) << endl;
}