#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12854
// O(t * s)
int main () {
    string s1;
    string s2;
    while (getline(cin, s1)) {
        getline(cin, s2);
        
        bool valid = true;
        for (int i = 0 ; i < s1.length(); i += 2) {
            valid &= s1[i] != s2[i];
        }
        cout << (valid ? "Y" : "N") << endl;
    }
}