#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1829/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int bin1 = -1;
        int bin2 = -1;
        int bin3 = -1;
        while (n--) {
            int val;
            string s;
            cin >> val >> s;
            if (s.compare("01") == 0) {
                bin1 = bin1 == -1 || val < bin1 ? val : bin1;
            } else if (s.compare("10") == 0) {
                bin2 = bin2 == -1 || val < bin2 ? val : bin2;
            } else if (s.compare("11") == 0) {
                bin3 = bin3 == -1 || val < bin3 ? val : bin3;
            }
        }

        int res = -1;
        if (bin1 != -1 && bin2 != -1) {
            res = bin1 + bin2;
        }

        if (bin3 != -1) {
            res = res == -1 ? bin3 : min(res, bin3);
        }

        cout << res << endl;
    }
}