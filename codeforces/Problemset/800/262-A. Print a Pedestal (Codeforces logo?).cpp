#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1690/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        double n;
        cin >> n;
        int first = ceil(n / 3);
        int second = ceil(n / 3);
        int third = n - first - second;
        if (third > 1) {
            third--;
        } else {
            second--;
        }
        first++;
        cout << second << " " << first << " " << third << endl;
    }
}