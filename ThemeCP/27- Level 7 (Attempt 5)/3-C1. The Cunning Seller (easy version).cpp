#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2132/C1
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        long long res = 0;
        while (n) {
            long long watermelon = 1;
            int x = 0;
            while (watermelon * 3 <= n) {
                watermelon *= 3;
                x++;
            }
            res += pow(3, x + 1) + x * pow(3, x - 1);
            n -= watermelon;
        }
        cout << res << endl;
    }
}