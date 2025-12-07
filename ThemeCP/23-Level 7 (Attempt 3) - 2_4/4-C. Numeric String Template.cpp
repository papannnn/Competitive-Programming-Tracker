#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2000/C
// O(t * n * m * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        int m;
        cin >> m;
        for (int i = 0 ; i < m; i++) {
            vector<long long> flag(26);
            for (int j = 0 ; j < flag.size(); j++) {
                flag[j] = 1e10;
            }
            string s;
            cin >> s;
            if (s.length() != arr.size()) {
                cout << "NO" << endl;
                continue;
            }

            bool valid = true;
            for (int j = 0; j < s.length(); j++) {
                if (flag[s[j] - 'a'] == 1e10) {
                    for (int k = 0; k < 26; k++) {
                        if (flag[k] == arr[j]) {
                            valid = false;
                            break;
                        }
                    }

                    if (!valid) {
                        break;
                    }
                    flag[s[j] - 'a'] = arr[j];
                } else {
                    if (flag[s[j] - 'a'] != arr[j]) {
                        valid = false;
                        break;
                    }
                }
            }
            cout << (valid ? "YES" : "NO") << endl;
        }
    }
}