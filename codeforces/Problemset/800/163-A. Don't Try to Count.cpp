#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1881/A
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        
        int res = -1;
        for (int i = 0 ; i < s1.length(); i++) {
            int p = i;
            char c = s1[p];
            int ptr = 0;
            string temp = s1;
            int cnt = 0;
            while (c == s2[ptr] && ptr < s2.length()) {
                if (c == s2[ptr]) {
                    ptr++;
                    p++;
                }

                if (ptr == s2.length()) {
                    res = cnt;
                    break;
                }

                if (p == temp.length()) {
                    temp = temp + temp;
                    cnt++;
                }
                c = temp[p];
            }

            if (res != -1) {
                break;
            }
        }

        cout << res << endl;
    }
}