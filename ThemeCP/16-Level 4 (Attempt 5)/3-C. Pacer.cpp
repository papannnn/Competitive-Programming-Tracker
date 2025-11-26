#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2148/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int currMin = 0;
        int currLoc = 0;
        int res = 0;
        for (int i = 0 ; i < n; i++) {
            int minute, loc;
            cin >> minute >> loc;
            int diff = minute - currMin;

            if (currLoc == loc) {
                res += diff - (diff % 2);
            } else {
                res += diff - (diff % 2 == 0);
            }

            currMin = minute;
            currLoc = loc;
        }

        res += m - currMin;
        cout << res << endl;
    }
}