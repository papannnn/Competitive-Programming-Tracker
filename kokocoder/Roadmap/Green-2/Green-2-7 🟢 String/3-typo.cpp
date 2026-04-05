#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    string s;
    cin >> s;
    string t;
    cin >> t;

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != t[i]) {
            swap(t[i], t[i + 1]);
        }
    }
    cout << (s == t ? "Yes" : "No") << endl;
}