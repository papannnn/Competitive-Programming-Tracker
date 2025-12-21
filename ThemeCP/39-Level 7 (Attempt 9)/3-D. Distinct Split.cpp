#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1791/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        unordered_map<char, int> cntAlphabet1;
        unordered_map<char, int> cntAlphabet2;
        for (int i = 0 ; i < s.length(); i++) {
            cntAlphabet1[s[i]]++;
        }

        int res = 0;
        for (int i = s.length() - 1; i >= 1; i--) {
            cntAlphabet1[s[i]]--;
            if (cntAlphabet1[s[i]] == 0) {
                cntAlphabet1.erase(s[i]);
            }

            cntAlphabet2[s[i]]++;
            int sizeA = cntAlphabet1.size();
            int sizeB = cntAlphabet2.size();
            res = max(res, sizeA + sizeB);
        }
        cout << res << endl;
    }
}