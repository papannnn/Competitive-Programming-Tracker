#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11192
// O(t * s)
int main () {
    int group;
    while (true) {
        cin >> group;
        if (group == 0) {
            break;
        }

        string s;
        cin >> s;
        int n = s.length() / group;
        for (int i = 0; i < s.length(); i += n) {
            for (int j = i + n - 1; j >= i; j--) {
                cout << s[j];
            }
        }
        cout << endl;
    }
}