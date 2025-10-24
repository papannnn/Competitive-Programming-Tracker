#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/711/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<string> arr(n);
    bool flag = false;
    for (string &s : arr) {
        cin >> s;
        if (flag) {
            continue;
        }

        for (int i = 0 ; i < s.length(); i += 3) {
            if (s[i] == 'O' && s[i + 1] == 'O') {
                flag = true;
                s[i] = '+';
                s[i + 1] = '+';
                break;
            }
        }
    }

    if (flag) {
        cout << "YES" << endl;
        for (string &s : arr) {
            cout << s << endl;
        }
    } else {
        cout << "NO" << endl;
    }

}