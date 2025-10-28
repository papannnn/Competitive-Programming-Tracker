#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1660/B
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

        if (arr.size() == 1 && arr[0] == 1) {
            cout << "YES" << endl;
            continue;
        } 

        int maxVal = -1;
        int idx = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (maxVal < arr[i]) {
                maxVal = arr[i];
                idx = i;
            }
        }

        int gap = 1e9;
        for (int i = 0 ; i < arr.size(); i++) {
            if (idx == i) {
                continue;
            }

            gap = min(gap, abs(maxVal - arr[i]));
        }
        cout << (gap <= 1 ? "YES" : "NO") << endl;
    }
}