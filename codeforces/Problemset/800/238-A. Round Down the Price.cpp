#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1702/A
// O(t * log10(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long cnt = 1;
        while (cnt * 10 <= n) {
            cnt *= 10;
        }
        cout << n - cnt << endl;
    }
}