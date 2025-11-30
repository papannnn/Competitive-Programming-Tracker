#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2164/B
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

        bool found = false;
        for (int i = 0 ; i < arr.size(); i++) {
            if (found) break;
            for (int j = i + 1; j < arr.size(); j++) {
                if ((arr[j] % arr[i]) % 2 == 0) {
                    cout << arr[i] << " " << arr[j] << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
}