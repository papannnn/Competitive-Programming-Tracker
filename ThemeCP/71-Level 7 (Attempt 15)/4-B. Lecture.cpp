#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/499/problem/B
// O(t * n ^ 2)
int main () {
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mapping;
    for (int i = 0 ; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        
        string temp;
        if (s1.length() <= s2.length()) {
            temp = s1;
        } else {
            temp = s2;
        }

        mapping[s1] = temp;
        mapping[s2] = temp;
    }

    for (int i = 0 ; i < n; i++) {
        string s;
        cin >> s;
        cout << mapping[s] << " ";
    }
    cout << endl;
}
