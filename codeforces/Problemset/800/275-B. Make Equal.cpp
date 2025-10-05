#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1931/B
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

        int expected = tot / arr.size();
        int temp = 0;
        bool valid = true;
        for (int &num : arr) {
            if (num < expected) {
                if (num + temp >= expected) {
                    temp -= abs(num - expected);
                } else {
                    valid = false;
                    break;
                }
            } else {
                temp += abs(num - expected);
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}