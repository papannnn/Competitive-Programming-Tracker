#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1764/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        bool valid = true;
        long long minVal = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            minVal = min(minVal, gcd(arr[i], minVal));
        }

        cout << arr[arr.size() - 1] / minVal << endl;
    }
}