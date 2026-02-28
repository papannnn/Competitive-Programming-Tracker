#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1827/A
// O(t * n log n)
long long mod = 1e9 + 7;
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

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        long long res = 1;
        int l = 0;
        for (int i = 0 ; i < arr2.size(); i++) {
            while (l <= i && arr1[l] <= arr2[i]) {
                l++;
            }

            res *= i - l + 1;
            res %= mod;
        }
        cout << res << endl;

    }
}
