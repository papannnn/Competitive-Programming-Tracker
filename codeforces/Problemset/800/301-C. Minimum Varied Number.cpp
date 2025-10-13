#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1714/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> res;
        int digit = 9;
        while (n) {
            if (n >= digit) {
                n -= digit;
                res.push_front(digit);
            }
            digit--;
        }

        while (!res.empty()) {
            cout << res[0];
            res.pop_front();
        }
        cout << endl;
    }
}