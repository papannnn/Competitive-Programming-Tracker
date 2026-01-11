#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1789/A
// O(t * n ^ 2)
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
        
        int res = arr.size() + 1;
        for (int i = 0 ; i < arr.size() && res > 2; i++) {
            for (int j = i + 1; j < arr.size() && res > 2; j++) {
                res = min(res, gcd(arr[i], arr[j]));
            }
        }
        // cout << res << endl;
        cout << (res <= 2 ? "Yes" : "No") << endl;
    }
}