#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/erase
// O(s)
int main () {
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    bool valid = true;
    for (int i = 0 ; i < s1.length(); i++) {
        if (n % 2 == 0) {
            valid &= s1[i] == s2[i];
        } else {
            valid &= s1[i] != s2[i];
        }
    }
    cout << (valid ? "Deletion succeeded" : "Deletion failed") << endl;
}