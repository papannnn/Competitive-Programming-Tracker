#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2051/C
// O(t * m * k)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr1(m);
        vector<int> arr2(k);
        for (int &num : arr1) {
            cin >> num;
        }

        unordered_set<int> flag;
        for (int &num : arr2) {
            cin >> num;
            flag.insert(num);
        }

        if (k < n - 1) {
            for (int i = 0 ; i < m; i++) {
                cout << 0;
            }
            cout << endl;
            continue;
        }
        
        if (k == n) {
            for (int i = 0 ; i < m; i++) {
                cout << 1;
            }
            cout << endl;
            continue;
        }

        for (int i = 0; i < arr1.size(); i++) {
            if (flag.find(arr1[i]) == flag.end()) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
}