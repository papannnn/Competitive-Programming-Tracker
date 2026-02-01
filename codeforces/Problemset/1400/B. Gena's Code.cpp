#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/614/problem/B
// O(n * s)
int main () {
    int n;
    cin >> n;
    vector<string> arr;
    string res = "1";
    for (int i = 0 ; i < n; i++) {
        string s;
        cin >> s;

        int oneCnt = 0;
        bool valid = true;
        for (int j = 0 ; j < s.length(); j++) {
            if (s[j] != '0' && s[j] != '1') {
                res = s;
                valid = false;
                break;
            }

            if (s[j] == '1') {
                oneCnt++;
            }
        }

        if (oneCnt > 1) {
            res = s;
            continue;
        }

        if (valid) {
            arr.push_back(s);
        }
    }
    
    for (string &s : arr) {
        if (s.compare("0") == 0) {
            res = "0";
            break;
        }

        if (s.compare("1") == 0) {
            continue;
        }
        
        for (int i = 0 ; i < s.length() - 1; i++) {
            res += '0';
        }
    }
    cout << res << endl;
}