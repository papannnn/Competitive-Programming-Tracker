#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2036/C
// O(t * (s + q))

bool check1100(string& s, int i) {
    if (i < 0) {
        return false;
    }
    int len = s.length();
    if (i >= len - 3) {
        return false;
    }

    return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            if (check1100(s, i)) {
                cnt++;
            }
        }
        // cout << cnt << endl;
        
        for (int i = 0 ; i < q; i++) {
            int idx, v;
            cin >> idx >> v;
            idx--;
            if (s[idx] != '0' + v) {
                bool prev = check1100(s, idx) || check1100(s, idx - 1) || check1100(s, idx - 2) || check1100(s, idx - 3);
                s[idx] = '0' + v;
                bool curr = check1100(s, idx) || check1100(s, idx - 1) || check1100(s, idx - 2) || check1100(s, idx - 3);
                cnt += curr - prev;
                
            }
            // cout << s << endl;
            cout << (cnt ? "YES" : "NO") << endl;
        }
    }
}