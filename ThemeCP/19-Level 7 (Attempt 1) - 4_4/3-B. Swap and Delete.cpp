#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1913/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        }

        if (one == zero) {
            cout << 0 << endl;
            continue;
        }

        string temp = "";
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '0' && one) {
                temp += '1';
                one--;
                continue;
            }

            if (s[i] == '1' && zero) {
                temp += '0';
                zero--;
                continue;
            }
            temp += s[i];
        }

        int ptr1 = 0;
        int ptr2 = 0;
        while (ptr1 < s.length() && ptr2 < temp.length()) {
            if (s[ptr1] != temp[ptr2]) {
                ptr1++;
                ptr2++;
            } else {
                ptr2++;
            }
        }

        cout << abs(ptr1 - ptr2 ) << endl;
    }
}
