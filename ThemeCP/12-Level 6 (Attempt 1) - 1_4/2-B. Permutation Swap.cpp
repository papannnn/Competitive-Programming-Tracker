#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1828/B
// O(t * n log n)

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i < arr.size(); i++) {
            int num;
            cin >> num;
            arr[i] = num;
        }

        int res = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] != i) {
                res = gcd(res, abs(arr[i] - i));
            }
        }
        cout << res << endl;
    }
}

