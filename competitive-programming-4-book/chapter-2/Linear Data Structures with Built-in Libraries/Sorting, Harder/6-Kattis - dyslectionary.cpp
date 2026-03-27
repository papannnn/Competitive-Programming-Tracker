#include <bits/stdc++.h>

using namespace std;
// O(t * n log n)
// https://open.kattis.com/problems/dyslectionary
int main () {
    string s;
    bool first = true;
    while (getline(cin, s)) {
        size_t maxLen = s.length();
        vector<string> arr;
        arr.push_back(s);
        while (getline(cin, s)) {
            if (s == "") {
                break;
            }
            maxLen = max(maxLen, s.length());
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end(), [](string &a, string &b) {
            string temp1 = a;
            string temp2 = b;
            reverse(temp1.begin(), temp1.end());
            reverse(temp2.begin(), temp2.end());
            
            return temp1 < temp2;
        });

        if (!first) {
            cout << endl;
        }
        first = false;
        for (string &s : arr) {
            for (int i = 0; i < maxLen - s.length(); i++) {
                cout << " ";
            }
            cout << s << endl;
        }
    }
}