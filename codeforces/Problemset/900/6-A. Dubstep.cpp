#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/208/A
// O(s)
int main () {
    string s;
    cin >> s;
    int ptr = 0;
    bool first = true;
    bool flag = false;
    while (ptr < s.length()) {
        if (ptr < s.length() - 2 && s[ptr] == 'W' && s[ptr + 1] == 'U' && s[ptr + 2] == 'B') {
            ptr += 3;
            flag = true;
            continue;
        }

        if (flag && !first) {
            cout << " ";
        }

        cout << s[ptr++];
        first = false;
        flag = false;
    }
    cout << endl;
}