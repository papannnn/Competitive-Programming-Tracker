#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-11608
// O(t)
int main () {
    int n;
    int cnt = 1;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }

        cout << "Case " << cnt << ":" << endl;
        vector<int> create(12);
        vector<int> take(12);
        for (int &num : create) {
            cin >> num;
        }

        for (int &num : take) {
            cin >> num;
        }

        for (int i = 0; i < 12; i++) {
            if (n >= take[i]) {
                n -= take[i];
                cout << "No problem! :D" << endl;
            } else {
                cout << "No problem. :(" << endl;
            }

            n += create[i];
        }
        cnt++;
    }
}