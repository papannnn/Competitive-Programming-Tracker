#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1861/A
// O(t * 2 ^ s)
int traverse(string curr, int pos, string &s) {
    if (pos == s.length()) {
        return -1;
    }

    if (curr.length() >= 2) {
        int num = stoi(curr);
        bool valid = true;
        // cout << num << endl;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                valid = false;
            }
        }

        if (valid) {
            return num;
        }
    }

    int take = traverse(curr + s[pos], pos + 1, s);
    int skip = traverse(curr, pos + 1, s);
    return max(take, skip);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << traverse("", 0, s) << endl;
    }
}