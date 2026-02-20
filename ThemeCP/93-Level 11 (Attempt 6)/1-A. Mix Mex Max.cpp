#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2127/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> flag;
        int maxVal = 0;
        int minVal = 1e9;
        int fill = 0;
        for (int &num : arr) {
            cin >> num;
            flag.insert(num);
            if (num != -1) {
                maxVal = max(maxVal, num);
                minVal = min(minVal, num);
            } else {
                fill++;
            }
        }

        if (minVal == 0) {
            cout << "NO" << endl;
            continue;
        }

        if (minVal == maxVal) {
            cout << "YES" << endl;
            continue;
        }

        if (fill == n) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}