#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int special = k * n;
        int sum = 0;
        while (n--) {
            int val;
            cin >> val;
            sum += val;
        }

        cout << (sum % 2 || special % 2 == 0 ? "YES" : "NO") << endl;
    }
}