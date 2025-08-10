#include <bits/stdc++.h>

using namespace std;
// O(t * log10 n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int minVal = 9;
        while (n) {
            minVal = min(minVal, n % 10);
            n /= 10;
        }
        cout << minVal << endl;
    }
}