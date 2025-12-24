#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1800/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int _, k;
        cin >> _ >> k;
        string s;
        cin >> s;

        vector<int> upperCaseArr(26);
        vector<int> lowerCaseArr(26);
        for (int i = 0 ; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                lowerCaseArr[s[i] - 'a']++;
            } else {
                upperCaseArr[s[i] - 'A']++;
            }
        }

        // for (int i = 0 ; i < upperCaseArr.size(); i++) {
        //     cout << upperCaseArr[i] << " ";
        // }
        // cout << endl;

        // for (int i = 0 ; i < lowerCaseArr.size(); i++) {
        //     cout << lowerCaseArr[i] << " ";
        // }
        // cout << endl;

        int res = 0;
        for (int i = 0; i < 26; i++) {
            int val = min(upperCaseArr[i], lowerCaseArr[i]);
            res += val;
            upperCaseArr[i] -= val;
            lowerCaseArr[i] -= val;

            val = min(k, upperCaseArr[i] / 2);
            k -= val;
            res += val;

            val = min(k, lowerCaseArr[i] / 2);
            k -= val;
            res += val;
        }
        cout << res << endl;
    }
}

// aAaaBACacbE
// aAaAaaBbCcE