#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2203/problem/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long s, m;
        cin >> s >> m;
        long long res = 0;
        bool flag = true;
        while (flag) {
            flag = false;
            for (int i = 63; i >= 0; i--) {
                long long v = pow(2, i);
                if ((v & m) == 0) {
                    continue;
                }

                if (v > s) {
                    continue;
                }

                if (s % v != 0) {
                    for (int j = i - 1; j >= 0; j--) {
                        long long b = pow(2, j);
                        if ((b & m) == 0) {
                            continue;
                        }

                        if ((v | b) <= s) {
                            v |= b;
                        }
                    }
                    flag = true;
                    // cout << s << endl;
                    // cout << v << endl;
                    res++;
                    // cout << res << endl;
                    s -= v;
                } else {
                    // cout << v << endl;
                    flag = true;
                    res += s / v;
                    // cout << res << endl;
                    s = 0;
                }
                
                break;
            }
        }
        
        cout << res << endl;
    }
}