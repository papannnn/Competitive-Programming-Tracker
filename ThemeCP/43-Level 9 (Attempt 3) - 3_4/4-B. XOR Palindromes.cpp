#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1867/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<bool> res(n + 1);
        string cleanS(s);

        int l = 0;
        int r = cleanS.size() - 1;
        int temp = 0;
        while (l < r) {
            if (s[l] != s[r]) {
                temp++;
                cleanS[l] = '1';
                cleanS[r] = '1';
            }
            
            l++;
            r--;
        }
        res[temp] = 1;
        if (s.length() % 2) {
            res[temp + 1] = 1;
        }

        l = 0;
        r = s.length() - 1;
        int cnt = 0;
        while (l < r) {
            if (s[l] == cleanS[l] && s[r] == cleanS[r] && s[l] == s[r]) {
                cnt += 2;
                res[temp + cnt] = 1;
                res[temp + cnt + (s.length() % 2)] = 1;
            }
            l++;
            r--;
        }

        for (int i = 0 ; i < res.size(); i++) {
            cout << res[i];
        }
        
        cout << endl;;
    }
}