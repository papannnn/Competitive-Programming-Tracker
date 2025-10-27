#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1945/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long res = a;
        if ((b % 3) && c < 3 - (b % 3)) {
            cout << -1 << endl;
            continue;
        }

        if (b % 3) {
            c -= 3 - (b % 3);
            b += 3 - (b % 3);
        }
            
        res += b / 3;
        res += c / 3;
        if (c % 3) 
        res++;
        cout << res << endl;
    }
}