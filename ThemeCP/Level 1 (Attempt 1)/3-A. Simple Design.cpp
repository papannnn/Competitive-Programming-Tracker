#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1884/A
// O(t * log10(n))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;

        int tot = 0;
        int num = x;
        while (num != 0) {
            int val = num % 10;
            tot += val;
            num /= 10;
        }
        
        while (tot % k != 0) {
            tot = 0;
            x++;
            int num = x;
            while (num != 0) {
                int val = num % 10;
                tot += val;
                num /= 10;
            }
        }

        cout << x << endl;
    }
}