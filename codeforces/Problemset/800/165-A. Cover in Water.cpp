#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1900/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int counter = 0;
        int maxCount = 0;
        int dotCount = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] == '.') {
                counter++;
                dotCount++;
                maxCount = max(maxCount, counter);
            } else {
                counter = 0;
            }
        }
        if (maxCount >= 3) {
            cout << 2 << endl;
        } else {
            cout << dotCount << endl;
        }
    }
}