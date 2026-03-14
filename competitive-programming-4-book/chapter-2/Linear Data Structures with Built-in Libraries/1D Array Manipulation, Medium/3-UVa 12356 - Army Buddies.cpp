#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12356
// O(t * n)
int main () {
    int s, b;
    while (true) {
        cin >> s >> b;
        if (s == 0 && b == 0) {
            break;
        }

        int limit = 1e5 + 5;
        vector<int> prev(limit);
        vector<int> next(limit);

        for (int i = 1; i <= s; i++) {
            prev[i] = i - 1;
            next[i] = i + 1;
        }
        prev[1] = -1;
        next[s] = -1;

        for (int i = 0; i < b; i++) {
            int l, r;
            cin >> l >> r;

            if (next[r] != -1)
                prev[next[r]] = prev[l];
            
            if (prev[l] != -1) {
                cout << prev[l] << " ";
            } else {
                cout << "* ";
            }

            if (prev[l] != -1)
                next[prev[l]] = next[r];

            if (next[r] != -1) {
                cout << next[r];
            } else {
                cout << "*";
            }
            cout << endl;
        }
        cout << "-" << endl;
    }
}
