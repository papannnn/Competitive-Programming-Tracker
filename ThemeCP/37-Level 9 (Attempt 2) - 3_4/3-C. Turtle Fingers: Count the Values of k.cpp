#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1933/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, l;
        cin >> a >> b >> l;

        int res = 0;
        unordered_set<long long> flag;
        for (int i = 0; i <= 20; i++) {
            long long powA = pow(a, i);
            if (powA > l) {
                break;
            }
            for (int j = 0; j <= 20; j++) {
                long long powB = pow(b, j);
                if (powB > l) {
                    break;
                }

                long long prod = powA * powB;
                if (prod > l) {
                    break;
                }
                
                if (l % prod == 0 && flag.find(prod) == flag.end()) {
                    res++;
                    flag.insert(prod);
                }
            }
        }
        cout << res << endl;
    }
}