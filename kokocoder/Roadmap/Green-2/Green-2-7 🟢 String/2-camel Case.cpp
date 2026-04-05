#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    string s;
    cin >> s;
    int res;
    for (int i = 0 ; i < s.length(); i++) {
        if (isupper(s[i])) {
            res = i + 1;
            break;
        }
    }
    cout << res << endl;
}