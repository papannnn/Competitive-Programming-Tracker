#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    char c;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o') {
        cout << "vowel" << endl;
    } else {
        cout << "consonant" << endl;
    }
}