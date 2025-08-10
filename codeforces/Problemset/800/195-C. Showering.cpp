#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1999/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        int currTime = 0;
        bool valid = false;
        while (n--) {
            int start, end;
            cin >> start >> end;
            valid |= s <= start - currTime;
            currTime = end;
        }
        valid |= s <= m - currTime;
        cout << (valid ? "YES" : "NO") << endl;
    }
}