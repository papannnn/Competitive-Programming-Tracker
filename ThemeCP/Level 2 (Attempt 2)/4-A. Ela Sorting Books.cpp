#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1737/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int num = n / k;
        string s;
        cin >> s;
        vector<int> arr(26);
        for (int i = 0 ; i < s.length(); i++) {
            arr[s[i] - 'a']++;
        }

        while (k--) {
            int val = 0;
            int cnt = num;
            for (int i = 0 ; i < 26; i++) {
                if (cnt == 0) {
                    break;
                }
                if (arr[i]) {
                    arr[i]--;
                    cnt--;
                    if (val == i) {
                        val++;
                    }
                }
            }
            char c = val + 'a';
            cout << c;
        }
        cout << endl;
    }
}