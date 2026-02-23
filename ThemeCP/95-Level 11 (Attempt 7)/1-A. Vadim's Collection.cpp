#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2098/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        unordered_map<char, int> mapping;
        int limit = 9;
        for (int i = 0 ; i < s.length(); i++) {
            mapping[s[i]]++;
        }

        for (int i = 9; i >= 0; i--) {
            for (int j = 0; j <= 9; j++) {
                if (j >= i && mapping['0' + j]) {
                    mapping['0' + j]--;
                    cout << j;
                    break;
                }
            }
        }
        cout << endl;
    }
}