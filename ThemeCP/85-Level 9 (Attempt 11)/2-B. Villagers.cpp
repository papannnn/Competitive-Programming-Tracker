#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2133/B
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
        sort(arr.begin(), arr.end(), greater<int>());
        long long res = 0;
        for (int i = 0; i < arr.size(); i += 2) {
            if (i + 1 == arr.size()) {
                res += arr[i];
                continue;
            }

            res += max(arr[i], arr[i + 1]);
            arr[i + 1] -= arr[i];
            arr[i] -= arr[i];
        }
        cout << res << endl;
    }
}