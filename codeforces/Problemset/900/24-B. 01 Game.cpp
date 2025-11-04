#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1373/B
// O(t * s ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // cout << s << endl;
        bool flag = true;
        bool win = false;
        while (flag) {
            flag = false;
            string temp = "";
            int len = s.length();
            for (int i = 0 ; i < len; ) {
                int zero = 0;
                int one = 0;
                if (i < len - 1) {
                    zero = s[i] == '0' || s[i + 1] == '0';
                    one = s[i] == '1' || s[i + 1] == '1';
                }
                
                if (zero && one && !flag) {
                    i += 2;
                    flag = true;
                    continue;
                }

                temp += s[i];
                i++;
            }

            s = temp;
            if (flag) {
                win = !win;
            }
        }
        cout << (win ? "DA" : "NET") << endl;
    }
}