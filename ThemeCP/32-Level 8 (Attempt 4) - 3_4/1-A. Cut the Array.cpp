#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2144/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
            sum += num;
        }

        if (sum % 3 != 0) {
            cout << "0 0" << endl;
            continue;
        }

        cout << "1 " << arr.size() - 1 << endl;
    }
}