#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1975/A
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

        if (is_sorted(arr.begin(), arr.end())) {
            cout << "Yes" << endl;
            continue;
        }

        bool valid = false;
        for (int i = 0; i < arr.size(); i++) {
            int temp = arr[0];
            arr.pop_front();
            arr.push_back(temp);
            valid |= is_sorted(arr.begin(), arr.end());
        }
        cout << (valid ? "Yes" : "No") << endl;
    }
}