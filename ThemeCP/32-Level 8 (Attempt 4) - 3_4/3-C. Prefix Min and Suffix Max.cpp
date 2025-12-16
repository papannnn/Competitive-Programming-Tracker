#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2123/C
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

        vector<int> minPrefix;
        deque<int> maxSuffix(n);
        minPrefix.push_back(arr[0]);
        for (int i = 1 ; i < n; i++) {
            if (arr[i] < minPrefix[i - 1]) {
                minPrefix.push_back(arr[i]);
            } else {
                minPrefix.push_back(minPrefix[i - 1]);
            }
        }
        maxSuffix[arr.size() - 1] = arr[arr.size() - 1];
        for (int i = arr.size() - 2; i >= 0; i--) {
            if (arr[i] > maxSuffix[i + 1]) {
                maxSuffix[i] = arr[i];
            } else {
                maxSuffix[i] = maxSuffix[i + 1];
            }
        }

        cout << 1;
        for (int i = 1; i < arr.size() - 1; i++) {
            if (arr[i] < minPrefix[i - 1]) {
                cout << 1;
                continue;
            }

            if (arr[i] > maxSuffix[i + 1]) {
                cout << 1;
                continue;
            }
            cout << 0;
        }
        cout << 1 << endl;

        // for (int num : minPrefix) {
        //     cout << num << " ";
        // }
        // cout << endl;

        // for (int num : maxSuffix) {
        //     cout << num << " ";
        // }
        // cout << endl;
    }
}