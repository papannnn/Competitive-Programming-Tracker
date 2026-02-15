#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2125/A
// O(t * s log s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end(), greater<char>());
        cout << s << endl;
    }
}