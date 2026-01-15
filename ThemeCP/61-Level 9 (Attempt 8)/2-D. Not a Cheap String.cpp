#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1702/D
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n;
        cin >> n;

        vector<long long> alpha(26);
        long long sum = 0;
        for (int i = 0 ; i < s.length(); i++) {
            alpha[s[i] - 'a']++;
            sum += s[i] - 'a' + 1;
        }

        if (sum < n) {
            cout << s << endl;
            continue;
        }

        string temp = s;
        sort(temp.begin(), temp.end());
        // cout << temp << endl;
        // cout << sum << endl;
        for (int i = temp.size() - 1; i >= 0 && sum > n; i--) {
            sum -= temp[i] - 'a' + 1;
            // cout << sum << endl;
            alpha[temp[i] - 'a']--;
        }

        for (int i = 0; i < s.length(); i++) {
            if (alpha[s[i] - 'a'] == 0) {
                continue;
            }
            alpha[s[i] - 'a']--;
            cout << s[i];
        }
        cout << endl;
    }
}