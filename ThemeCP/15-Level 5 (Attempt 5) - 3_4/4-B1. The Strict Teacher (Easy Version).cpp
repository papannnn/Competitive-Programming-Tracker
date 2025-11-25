#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2005/B1
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<long long> teacher(m);
        for (long long &num : teacher) {
            cin >> num;
        }
        sort(teacher.begin(), teacher.end());

        for (int i = 0 ; i < q; i++) {
            long long david;
            cin >> david;
            if (teacher[0] < david && david < teacher[1]) {
                // if (abs(teacher[0] - david) == 1 && abs(teacher[1] - david) == 1) {
                //     cout << 1 << endl;
                //     continue;
                // }

                
                int diff = abs(teacher[0] - teacher[1]) / 2;
                cout << diff << endl;
                continue;
            }
            if (david < teacher[0]) {
                cout << abs(teacher[0] - david) + abs(david - 1) << endl;
            } else {
                cout << abs(teacher[1] - david) + abs(david - n) << endl;
            }
        }
    }
}