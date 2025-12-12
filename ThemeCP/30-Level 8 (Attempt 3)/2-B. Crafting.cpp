#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2055/B
// O(t * n)

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        int decrease = 0;
        int idx = -1;
        for (int i = 0 ; i < arr1.size(); i++) {
            if (arr2[i] > arr1[i]) {
                decrease = arr2[i] - arr1[i];
                idx = i;
                break;
            }
        }
        bool flag = true;
        bool valid = true;
        for (int i = 0 ; i < arr1.size(); i++) {
            if (idx == i) {
                continue;
            }
            if (arr2[i] > (arr1[i] - decrease)) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}