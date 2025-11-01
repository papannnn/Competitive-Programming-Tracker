#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/580/A
// O(n)
int main () {
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    n--;
    int res = 1;
    int curr = 1;
    while (n--) {
        int num;
        cin >> num;
        if (num < prev) {
            curr = 1;
        } else {
            curr++;
        }
        res = max(res, curr);
        prev = num;
    }
    cout << res << endl;
}