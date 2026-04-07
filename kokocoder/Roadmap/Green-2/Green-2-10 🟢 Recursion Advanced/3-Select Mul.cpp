#include <bits/stdc++.h>

using namespace std;
long long maxVal = 0;
void f(int idx, string &s) {
    if (idx == s.length()) {
        for (int i = 0 ; i < s.length() - 1; i++) {
            string s1 = "";
            string s2 = "";
            
            for (int j = i + 1; j < s.length(); j++) {
                s2 += s[j];
            }

            for (int k = 0; k <= i; k++) {
                s1 += s[k];
            }

            long long res1 = 0;
            long long res2 = 0;
            for (int j = 0 ; j < s1.length() - 1; j++) {
                res1 += s1[j] - '0';
                res1 *= 10;
            }
            res1 += s1.back() - '0';

            for (int j = 0 ; j < s2.length() - 1; j++) {
                res2 += s2[j] - '0';
                res2 *= 10;
            }
            res2 += s2.back() - '0';
            maxVal = max(maxVal, res1 * res2);
        }

        

        return;
    }

    for (int i = idx; i < s.length(); i++) {
        swap(s[i], s[idx]);
        f(idx + 1, s);
        swap(s[i], s[idx]);
    }
}

int main () {
    string s;
    cin >> s;
    f(0, s);
    cout << maxVal << endl;
}