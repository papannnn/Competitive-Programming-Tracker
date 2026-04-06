#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    long long n, a, b;
    cin >> n >> a >> b;
    long long sum = a + b;
    long long res = n / sum;
    cout << res * a + (min(n % sum, a)) << endl;
}