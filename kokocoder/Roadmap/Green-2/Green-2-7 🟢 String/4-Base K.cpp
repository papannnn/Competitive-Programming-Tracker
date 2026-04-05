#include <bits/stdc++.h>

using namespace std;
// O(max(s))
int main () {
    int k;
    cin >> k;
    string s1, s2;
    cin >> s1 >> s2;

    long long res1 = 0;
    for (int i = s1.length() - 1; i >= 0; i--) {
        long long p = pow(k, s1.length() - i - 1);
        res1 += p * (s1[i] - '0');
    }

    long long res2 = 0;
    for (int i = s2.length() - 1; i >= 0; i--) {
        long long p = pow(k, s2.length() - i - 1);
        res2 += p * (s2[i] - '0');
    }
    cout << res1 * res2 << endl;
}