#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1875/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        long long res = 0;
        res += b;
        for (int &num : arr) {
            cin >> num;
            res += num >= a ? a - 1 : num;
        }

        cout << res << endl;
    }
}