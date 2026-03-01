#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2200/problem/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        if (is_sorted(arr.begin(), arr.end())) {
            cout << arr.size() << endl;
        } else {
            cout << 1 << endl;
        }
    }
}