#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    bool valid = false;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < s2.length(); j++) {
            if (s2[j] == '9') {
                s2[j] = '0';
            } else {
                s2[j]++;
            }
        }
        valid |= s1 == s2;
    }
    cout << (valid ? "YA" : "TIDAK") << endl;
}