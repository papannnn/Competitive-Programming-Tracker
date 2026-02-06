#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2094/D
// O(t * max(s1, s2))
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        int ptr1 = 0;
        vector<int> cntS1;
        string uniqueS1 = "";
        while (ptr1 < s1.length()) {
            int cnt = 0;
            char curr = s1[ptr1];
            while (ptr1 < s1.length() && s1[ptr1] == curr) {
                cnt++;
                ptr1++;
            }
            uniqueS1 += curr;
            cntS1.push_back(cnt);
        }

        int ptr2 = 0;
        vector<int> cntS2;
        string uniqueS2 = "";
        while (ptr2 < s2.length()) {
            int cnt = 0;
            char curr = s2[ptr2];
            while (ptr2 < s2.length() && s2[ptr2] == curr) {
                cnt++;
                ptr2++;
            }
            uniqueS2 += curr;
            cntS2.push_back(cnt);
        }

        if (uniqueS1.compare(uniqueS2) != 0) {
            cout << "NO" << endl;
            continue;
        }

        bool valid = true;
        for (int i = 0 ; i < cntS1.size(); i++) {
            if (cntS2[i] > cntS1[i] * 2) {
                valid = false;
                break;
            }

            if (cntS1[i] > cntS2[i]) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}