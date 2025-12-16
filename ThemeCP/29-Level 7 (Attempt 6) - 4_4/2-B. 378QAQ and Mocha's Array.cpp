#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1975/B
// O(t * n log n)
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

        sort(arr.begin(), arr.end());
        bool valid = true;
        int a = arr[0];
        int b = -1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] % a == 0) {
                continue;
            }

            if (b == -1) {
                b = arr[i];
                continue;
            }
            
            if (arr[i] % a != 0 && arr[i] % b != 0) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "Yes" : "No") << endl;
    }
}