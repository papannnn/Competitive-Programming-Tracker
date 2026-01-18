#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1659/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int div = r / (b + 1);
        int mod = r % (b + 1);
        string res = "";
        for (int i = 0 ; i < mod; i++) {
            cout << string(div + 1, 'R') << "B";
        }

        for (int i = mod; i < b; i++) {
            cout << string(div, 'R') << "B";
        }
        cout << string(div, 'R');
        // cout << div << endl;
        cout << endl;
    }
}
