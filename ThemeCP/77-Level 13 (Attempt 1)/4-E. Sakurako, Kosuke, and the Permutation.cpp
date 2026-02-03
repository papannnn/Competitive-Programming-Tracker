#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2033/E
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        int res = 0;
        vector<bool> flag(n + 1);
        for (int i = 1; i <= n; i++) {
            if (!flag[i]) {
                int connection = 0;
                int next = arr[i];
                while (!flag[next]) {
                    connection++;
                    flag[next] = true;
                    next = arr[next];
                }
                res += (connection - 1) / 2;
            }
        }
        cout << res << endl;
    }
}
