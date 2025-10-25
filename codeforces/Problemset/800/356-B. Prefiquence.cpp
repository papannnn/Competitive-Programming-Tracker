#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1968/B
// O(t * m + n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        int ptr = 0;
        for (int i = 0 ; i < s2.length(); i++) {
            if (ptr == s1.length()) {
                break;
            }
            if (s2[i] == s1[ptr]) {
                ptr++;
            }
        }
        cout << ptr << endl;
    }
}