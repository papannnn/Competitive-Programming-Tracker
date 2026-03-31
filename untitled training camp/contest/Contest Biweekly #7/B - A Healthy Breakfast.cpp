#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/B
// O(1)
int main () {
    string s;
    cin >> s;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'R') {
            cout << "Yes" << endl;
            break;
        } else if (s[i] == 'M') {
            cout << "No" << endl;
            break;
        }
    }
}