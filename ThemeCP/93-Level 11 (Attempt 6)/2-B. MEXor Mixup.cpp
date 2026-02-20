#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1567/B
// O(t * a)
int main () {
    vector<int> precompute(3e5 + 1);
    int xorVal = 0;
    for (int i = 0; i <= 3e5 + 1; i++) {
        xorVal = xorVal ^ i;
        precompute[i + 1] = xorVal;
    }

    int t;
    cin >> t;


    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (precompute[a] == b) {
            cout << a << endl;
        } else if (precompute[a] != b && (precompute[a] ^ b) != a) {
            cout << a + 1 << endl;
        } else {
            cout << a + 2 << endl;
        }
    }
}