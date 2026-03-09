#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/266/B
// O(n)
int main () {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--) {
        for (int i = 0 ; i < s.length() - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    
    cout << s << endl;
}