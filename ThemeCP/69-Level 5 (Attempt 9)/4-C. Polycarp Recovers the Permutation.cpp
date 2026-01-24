#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1611/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        if (arr[0] != n && arr.back() != n) {
            cout << -1 << endl;
            continue;
        }

        if (arr[0] == n) {
            arr.pop_front();
        } else {
            arr.pop_back();
        }

        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << n << endl;
    }
}
// 2 3 1 4
// 1 3 2 4