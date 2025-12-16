#include <bits/stdc++.h>

using namespace std;
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int zero = 0;
        int one = 0;
        long long res = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
                continue;
            }

            if (one)
            res += (one + 1);
        }
        cout << res << endl;
    }
}