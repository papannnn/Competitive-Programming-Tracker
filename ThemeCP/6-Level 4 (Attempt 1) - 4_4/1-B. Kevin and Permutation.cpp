#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1754/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start = ceil((double) n / 2);
        int end = n % 2 ? 1 : 0;
        for (int i = start, j = 0; i > end; i--, j++){
            // if ()
            cout << i << " " << n - j << " ";
        }
        
        if (end) {
            cout << 1;
        }

        if (n % 2) {
            cout << endl;
        } else {
            cout << endl;
        }
    }
}