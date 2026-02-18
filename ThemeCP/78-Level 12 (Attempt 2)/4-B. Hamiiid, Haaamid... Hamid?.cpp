#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2127/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    int cnt = 0;
    while (t--) {
        cnt++;
        int n, x;
        cin >> n >> x;
        vector<char> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        int nearestLeft = -1e9;
        for (int i = x - 1; i >= 1; i--) {
            if (arr[i] == '#') {
                nearestLeft = i;
                break;
            }
        }

        int nearestRight = 1e9;
        for (int i = x + 1; i <= n; i++) {
            if (arr[i] == '#') {
                nearestRight = i;
                break;
            }
        }
        if (nearestLeft == -1e9 && nearestRight == 1e9) {
            cout << 1 << endl;
            continue;
        }


        cout << max(min(x, n - nearestRight + 2), min(nearestLeft + 1, n - x + 1)) << endl;
    }
}
//