#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    long long sum = 0;
    while (n--) {
        long long a, b;
        cin >> a >> b;
        sum += (b - a + 1) * (a + b) / 2;
    }
    cout << sum << endl;
}