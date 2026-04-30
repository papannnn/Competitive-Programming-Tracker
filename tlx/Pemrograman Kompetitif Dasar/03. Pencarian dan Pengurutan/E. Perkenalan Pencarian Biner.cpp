#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }

    int k;
    cin >> k;
    // cout << (upper_bound(arr.begin(), arr.end(), 20) == arr.end()) << endl;
    while (k--) {
        long long l, r;
        cin >> l >> r;

        int left = upper_bound(arr.begin(), arr.end(), l) - arr.begin();
        int right = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
        cout << right - left << endl;
    }
}