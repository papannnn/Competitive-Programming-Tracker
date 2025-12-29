#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (s.contains("2026")) {
            cout << 0 << endl;
            continue;
        }

        if (s.contains("2025")) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}