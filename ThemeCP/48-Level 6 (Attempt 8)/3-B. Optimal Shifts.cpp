#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2176/B
// O(t * s) 
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        
        int ptr = 0;
        while (s[ptr] == '0') {
            s += '0';
            ptr++;
        }

        int pos = -1;
        int maxVal = 0;
        for (int i = 0 ; i < s.length(); i++) {
            if (pos != -1) {
                if (s[i] == '0') {
                    maxVal = max(maxVal, abs(i - pos));
                }
            }

            if (s[i] == '1') {
                pos = i;
            }
        }

        cout << maxVal << endl;
    }
}
