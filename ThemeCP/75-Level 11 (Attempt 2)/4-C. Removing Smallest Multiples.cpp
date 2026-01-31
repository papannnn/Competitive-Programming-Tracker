#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1734/problem/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            arr[i] = s[i - 1];
        }
        
        arr[0] = '0';

        long long res = 0;
        vector<bool> flag(n + 1);
        for (int i = 1; i <= n; i++) {
            int mult = 1;
            while (i * mult <= n && arr[i * mult] == '0') {
                if (!flag[i * mult]) {
                    res += i;
                }
                flag[i * mult] = true;
                mult++;
            }
        }
        cout << res << endl;
    }
}