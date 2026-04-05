#include <bits/stdc++.h>

using namespace std;
// O(s)
int main () {
    string s;
    cin >> s;
    string s1;
    cin >> s1;

    int diff = 0;
    char c = s[0];
    for (int i = 0; i < 26; i++) {
        if (c == s1[0]) {
            diff = i;
            break;
        }

        if (c == 'z') {
            c = 'a';
        } else {
            c++;
        }
    }
    
    for (int i = 0 ; i < s.length(); i++) {
        for (int j = 0; j < diff; j++) {
            if (s[i] == 'z') {
                s[i] = 'a';
            } else {
                s[i]++;
            }
        }
    }
    cout << (s == s1 ? "Yes" : "No") << endl;
}