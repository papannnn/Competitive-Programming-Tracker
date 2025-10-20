#include <bits/stdc++.h>
#include <ctype.h>

using namespace std;
// https://codeforces.com/problemset/problem/1976/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        
        int digitCnt = 0;
        int alphaCnt = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                digitCnt++;
            } else {
                alphaCnt++;
            }
        }

        int ptr = 0;
        string digitStr = "";
        while (ptr < s.length() && isdigit(s[ptr])) {
            digitStr += s[ptr];
            ptr++;
        }

        string alphaStr = "";
        while (ptr < s.length() && isalpha(s[ptr])) {
            alphaStr += s[ptr];
            ptr++;
        }

        int len = digitStr.length();
        if (len != digitCnt) {
            cout << "NO" << endl;
            continue;
        }

        len = alphaStr.length();
        if (len != alphaCnt) {
            cout << "NO" << endl;
            continue;
        }

        bool valid = true;
        for (int i = 1 ; i < digitStr.length(); i++) {
            if (digitStr[i] < digitStr[i - 1]) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 1 ; i < alphaStr.length(); i++) {
            if (alphaStr[i] < alphaStr[i - 1]) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
