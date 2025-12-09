#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2128/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        int res = 0;
        sort(arr.begin(), arr.end());
        while (!arr.empty() && arr[arr.size() - 1] > k) {
            res++;
            // cout << "Trash: " << arr[arr.size() - 1] << endl;
            arr.pop_back();
        }

        int mult = 1;
        while (!arr.empty()) {
            if (arr[arr.size() - 1] * mult > k) {
                res++;
            } else {
                mult *= 2;
            }
            arr.pop_back();
        }
        cout << res << endl;
    }
}