#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1796/B
// O(t * s1 * s2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1;
        cin >> s2;

        if (s1[0] == s2[0]) {
            cout << "YES" << endl;
            cout << s1[0] << "*" << endl;
            continue;
        }

        if (s1[s1.length() - 1] == s2[s2.length() - 1]) {
            cout << "YES" << endl;
            cout << "*" << s1[s1.length() - 1] << endl;
            continue;
        }

        bool found = false;
        for (int i = 0; i < s1.length() - 1; i++) {
            if (found) {
                break;
            }
            for (int j = 0; j < s2.length() - 1; j++) {
                if (s1[i] == s2[j] && s1[i + 1] == s2[j + 1]) {
                    cout << "YES" << endl;
                    cout << "*" << s1[i] << s1[i + 1] << "*" << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found)
        cout << "NO" << endl;
    }
}
// abrrd
// cbttttd