#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1506/C
// O(t * max(s1, s2))
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        int minVal = s1.length() + s2.length();
        for (int i = 0 ; i < s1.length(); i++) {
            for (int j = i; j < s1.length(); j++) {
                string s = "";
                for (int k = i; k <= j; k++) {
                    s += s1[k];
                }

                if (s2.contains(s)) {
                    int s1Len = s1.length() - s.length();
                    int s2Len = s2.length() - s.length();

                    minVal = min(minVal, (s1Len) + (s2Len));
                }
            }
        }

        for (int i = 0 ; i < s2.length(); i++) {
            for (int j = i; j < s2.length(); j++) {
                string s = "";
                for (int k = i; k <= j; k++) {
                    s += s2[k];
                }

                if (s1.contains(s)) {
                    int s1Len = s1.length() - s.length();
                    int s2Len = s2.length() - s.length();

                    minVal = min(minVal, (s1Len) + (s2Len));
                }
            }
        }
        cout << minVal << endl;
    }
}