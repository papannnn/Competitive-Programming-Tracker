#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1829/D
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (m > n) {
            cout << "NO" << endl;
            continue;
        }

        if (m == n) {
            cout << "YES" << endl;
            continue;
        }

        if (n % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }

        deque<int> queue;
        queue.push_back(n);
        bool found = false;
        while (!queue.empty()) {
            int val = queue[0];
            // cout << val << endl;
            if (val == m) {
                found = true;
                break;
            }

            if (val % 3 == 0) {
                queue.push_back(val / 3);
                queue.push_back(val / 3 * 2);
            }
            queue.pop_front();
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}