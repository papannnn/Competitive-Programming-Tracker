#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/800829#problem/A
// O(1)
int main () {
    vector<bool> arr(26);
    string s;
    cin >> s;
    for (int i = 0 ; i < s.length(); i++) {
        arr[s[i] - 'a'] = true;
    }

    for (int i = 0 ; i < 26; i++) {
        if (!arr[i]) {
            char c = i + 'a';
            cout << c << endl;
            break;
        }
    }
}