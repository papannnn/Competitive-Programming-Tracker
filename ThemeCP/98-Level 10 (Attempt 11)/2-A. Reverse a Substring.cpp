#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1155/A
// O(n)
int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int minVal = s[0] - 'a';
    int minPos = 0;
    bool flag = false;
    for (int i = 1 ; i < s.length(); i++) {
        if (s[i] - 'a' < minVal) {
            flag = true;
            cout << "YES" << endl;
            cout << minPos + 1 << " " << i + 1 << endl;
            break;
        }

        minPos = i;
        minVal = s[i] - 'a';
    }

    if (!flag) {
        cout << "NO" << endl;
    }
}