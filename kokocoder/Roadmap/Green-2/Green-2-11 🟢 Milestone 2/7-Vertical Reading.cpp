#include <bits/stdc++.h>

using namespace std;
int main () {
    string s1;
    string s2;
    cin >> s1 >> s2;
    bool valid = false;
    for (int i = 1 ; i < s1.length(); i++) {
        for (int j = 0; j < i; j++) {
            string curr = "";
            for (int k = j; k < s1.length(); k += i) {
                curr += s1[k];
            }

            valid |= curr == s2;
        }
    }
    cout << (valid ? "Yes" : "No") << endl;
}