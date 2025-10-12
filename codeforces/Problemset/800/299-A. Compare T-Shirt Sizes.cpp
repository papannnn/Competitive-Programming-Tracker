#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1741/A
// O(t)
int main () {
    int t;
    cin >> t;

    unordered_map<char, int> mapping;
    mapping['S'] = -1;
    mapping['M'] = 0;
    mapping['L'] = 1;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int lastA = mapping[a[a.length() - 1]];
        int lastB = mapping[b[b.length() - 1]];
        
        if (lastA < lastB) {
            cout << "<" << endl;
            continue;
        }

        if (lastA > lastB) {
            cout << ">" << endl;
            continue;
        }

        int countA = 0;
        int countB = 0;
        for (int i = 0 ; i < a.length() - 1; i++) {
            if (a[i] == 'X') {
                countA += lastA;
            }
        }

        for (int i = 0 ; i < b.length() - 1; i++) {
            if (b[i] == 'X') {
                countB += lastB;
            }
        }

        if (countA < countB) {
            cout << "<" << endl;
            continue;
        }

        if (countA > countB) {
            cout << ">" << endl;
            continue;
        }

        cout << "=" << endl;
    }
}