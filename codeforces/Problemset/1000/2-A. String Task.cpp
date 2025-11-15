#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/118/A
// O(t * s)
int main () {
    unordered_set<char> vowel = {'a', 'i', 'u', 'e', 'o', 'y'};
    string s;
    cin >> s;
    for (int i = 0 ; i < s.length(); i++) {
        if (vowel.find(tolower(s[i])) != vowel.end()) {
            continue;
        }
        char c = tolower(s[i]);
        cout << "." << c;
    }
    cout << endl;
}