#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/977/B
// O(s)
int main () {
    int _;
    cin >> _;
    string s;
    cin >> s;
    
    unordered_map<string, int> mapping;
    for (int i = 0 ; i < s.length() - 1; i++) {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        mapping[temp]++;
    }

    string res;
    int maxVal = -1;
    for (auto &m : mapping) {
        if (m.second > maxVal) {
            maxVal = m.second;
            res = m.first;
        }
    }
    cout << res << endl;
}
