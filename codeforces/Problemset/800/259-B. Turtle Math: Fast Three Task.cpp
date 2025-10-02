#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1933/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int tot = 0;
        for (int &num : arr) {
            cin >> num;
            tot += num;
        }

        if (tot % 3 == 0) {
            cout << 0 << endl;
            continue;
        }

        bool found = (tot + 1) % 3 == 0;
        for (int &num : arr) {
            found |= (tot - num) % 3 == 0;
        }

        cout << (found ? 1 : 2) << endl;
    }
}