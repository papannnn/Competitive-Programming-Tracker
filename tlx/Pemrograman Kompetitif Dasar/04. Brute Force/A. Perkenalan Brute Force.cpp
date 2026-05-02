#include <bits/stdc++.h>

using namespace std;
int main () {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    bool valid = false;
    for (int i = 0; i < s1.length(); i++) {
        string temp = "";
        for (int j = 0; j < s1.length(); j++) {
            if (j == i) {
                continue;
            }

            temp += s1[j];
        }
        valid |= temp == s2;
    }
    cout << (valid ? "Tentu saja bisa!" : "Wah, tidak bisa :(") << endl;
}