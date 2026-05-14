#include <bits/stdc++.h>

using namespace std;

string dp(int idx1, int idx2, string &s1, string &s2, vector<vector<string>> &memo) {
    if (idx1 == s1.length() || idx2 == s2.length()) {
        return "";
    }

    if (memo[idx1][idx2] != "#") {
        return memo[idx1][idx2];
    }

    if (s1[idx1] == s2[idx2]) {
        memo[idx1][idx2] = s1[idx1] + dp(idx1 + 1, idx2 + 1, s1, s2, memo);
        return memo[idx1][idx2];
    }

    string skip1 = dp(idx1 + 1, idx2, s1, s2, memo);
    string skip2 = dp(idx1, idx2 + 1, s1, s2, memo);
    if (skip1.size() > skip2.size()) {
        memo[idx1][idx2] = skip1;
    } else {
        memo[idx1][idx2] = skip2;
    }

    return memo[idx1][idx2];
}

int main () {
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<string>> memo(s1.length() + 1, vector<string>(s2.length() + 1, "#"));
    string res = dp(0, 0, s1, s2, memo);
    cout << res << endl;
}