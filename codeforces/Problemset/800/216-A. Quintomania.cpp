#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2036/A
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

        bool valid = true;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            int diff = abs(arr[i] - arr[i + 1]);
            if (diff != 5 && diff != 7) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}