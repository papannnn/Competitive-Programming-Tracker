#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2113/B
// O(t)

struct Point {
    long long x;
    long long y;

    Point(long long x, long long y) {
        this->x = x;
        this->y = y;
    }
};

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long w, h, a, b;
        cin >> w >> h >> a >> b;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == x2) {
            if (abs(y1 - y2) % b == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            continue;
        }

        if (y1 == y2) {
            if (abs(x1 - x2) % a == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            continue;
        }

        if (abs(x1 - x2) % a == 0 || abs(y1 - y2) % b == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}