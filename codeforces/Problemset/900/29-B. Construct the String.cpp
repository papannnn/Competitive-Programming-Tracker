#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1335/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        unordered_set<char> memo;
        int cnt = 0;
        char c = 'a';
        for (int i = 0 ; i < n; i++) {
            if (cnt >= a) {
                memo.clear();
                cnt = 0;
                c = 'a';
            }

            if (memo.size() < b) {
                cout << c;
                memo.insert(c++);
            } else {
                cout << 'a';
            }
            cnt++;
        }
        cout << endl;
    }
}