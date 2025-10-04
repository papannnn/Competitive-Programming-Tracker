#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1833/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        unordered_set<string> memo;
        string first = "";
        first += s.at(0);
        first += s.at(1);
        memo.insert(first);
        for (int i = 2; i < s.length(); i++) {
            string str = "";
            str += s.at(i - 1);
            str += s.at(i);
            memo.insert(str);
        }
        cout << memo.size() << endl;
    }
}