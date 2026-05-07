#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mapping;
    for (int i = 0; i < s.length(); i++) {
        mapping[s[i]]++;
    }

    long long res = -1;
    for (int i = 1; i <= 500; i++) {
        int cnt = 0;
        int cntExtra = 0;
        for (auto &m : mapping) {
            if (m.second == i) {
                cnt++;
                continue;
            }

            if (m.second > i) {
                cntExtra++;
            }
        }

        int take = 3;
        int takeOne = 0;
        int takeTwo = 0;
        takeTwo = min(cntExtra, take);
        take -= takeTwo;
        takeOne = min(cnt, take);
        take -= takeOne;
        long long val = takeOne * i + takeTwo * (i + 1);
        if (!take) {
            res = max(res, val);
        }
    }
    cout << res << endl;
}