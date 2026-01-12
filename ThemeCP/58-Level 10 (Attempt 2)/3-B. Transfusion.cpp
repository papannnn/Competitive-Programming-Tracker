#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2050/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long sum = 0;
        for (long long &num : arr) {
            cin >> num;
            sum += num;
        }

        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        long long val = sum / n;
        bool valid = true;
        for (int i = 1; i < arr.size() - 1; i++) {
            long long diff = arr[i - 1] - val;
            arr[i - 1] = val;
            arr[i + 1] += diff;
        }

        for (int i = arr.size() - 2; i >= 1; i--) {
            long long diff = arr[i + 1] - val;
            arr[i + 1] = val;
            arr[i - 1] += diff;
        }

        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] != val) {
                valid = false;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}