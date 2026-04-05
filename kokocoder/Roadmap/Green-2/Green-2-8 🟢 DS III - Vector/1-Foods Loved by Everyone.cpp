#include <bits/stdc++.h>

using namespace std;
// O(n * k)
int main () {
    int n, m;
    cin >> n >> m;
    vector<int> foods(m + 1);
    for (int i = 0 ; i < n; i++) {
        int k;
        cin >> k;
        while (k--) {
            int val;
            cin >> val;
            foods[val]++;
        }
    }

    int res = 0;
    for (int i = 1; i <= m; i++) {
        res += foods[i] == n;
    }
    cout << res << endl;
}