#include <bits/stdc++.h>

using namespace std;

set<long long> res;
void traverse(string &s, int idx, long long curr) {
    if (idx == s.length()) {
        res.insert(curr);
        return;
    }

    long long num = 0;
    for (int i = idx; i < s.length(); i++) {
        num = num * 10 + (s[i] - '0');
        if (idx == 0) {
            traverse(s, i + 1, num);
        } else {
            traverse(s, i + 1, curr + num);
            traverse(s, i + 1, curr - num);
        }
    }
}

int main () {
    string s;
    cin >> s;
    traverse(s, 0, 0);
    cout << res.size() << endl;
}