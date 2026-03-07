#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2203/problem/B
// O(t * log n)

string val(string& s) {
    long long cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        cnt += s[i] - '0';
    }

    return to_string(cnt);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string firstVal = val(s);
        string secVal = val(firstVal);
        if (firstVal.compare(secVal) == 0) {
            cout << 0 << endl;
            continue;
        }

        unordered_map<char, int> mapping;
        for (int i = 0 ; i < s.length(); i++) {
            mapping[s[i]]++;
        }

        int maxVal = 0;
        for (auto &m : mapping) {
            maxVal = max(m.second, maxVal);
        }
        cout << s.length() - maxVal << endl;
    }
}