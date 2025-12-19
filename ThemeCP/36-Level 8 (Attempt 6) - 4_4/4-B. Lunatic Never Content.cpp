#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1826/B
// O(t * n)
bool isPalindrome(vector<int> &arr, int l, int r) {
    while (l < r) {
        if (arr[l] != arr[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

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

        if (isPalindrome(arr, 0, arr.size() - 1)) {
            cout << 0 << endl;
            continue;
        }

        int l = 0;
        int r = arr.size() - 1;
        int res = 0;
        while (l < r) {
            int diff = abs(arr[l] - arr[r]);
            res = gcd(diff, res);
            l++;
            r--;
        }
        cout << res << endl;
    }
}