#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1974/B
// O(t * (s log s))
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        unordered_set<char> flagging;
        string temp = "";
        for (int i = 0 ; i < s.length(); i++) {
            if (flagging.find(s[i]) == flagging.end()) {
                flagging.insert(s[i]);
                temp += s[i];
            }
        }
        sort(temp.begin(), temp.end());
        int left = 0;
        int right = temp.length() - 1;
        unordered_map<char, char> mapping;
        while (left <= right) {
            mapping[temp[left]] = temp[right];
            mapping[temp[right]] = temp[left];
            left++;
            right--;
        }
        for (int i = 0 ; i < s.length(); i++) {
            cout << mapping[s[i]];
        }
        cout << endl;
    }
}