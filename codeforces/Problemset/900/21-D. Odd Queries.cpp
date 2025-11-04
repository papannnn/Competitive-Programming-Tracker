#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1807/D
// O(t * n * q)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        int odd = 0;
        vector<int> arr(n);
        vector<int> oddArr;
        for (int &num : arr) {
            cin >> num;
            odd += num % 2;
            oddArr.push_back(odd);
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int amountOdd = oddArr[r - 1] - oddArr[l - 1] + (arr[l - 1] % 2);
            int amountEven = r - l + 1 - amountOdd;

            if (k % 2) {
                cout << ((odd + amountEven) % 2 ? "YES" : "NO") << endl;
            } else {
                cout << ((odd - amountOdd) % 2 ? "YES" : "NO") << endl;
            }
        }
    }
}