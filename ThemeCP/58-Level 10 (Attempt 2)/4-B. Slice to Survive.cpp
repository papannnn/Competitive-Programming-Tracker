#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2109/B
// O(t * log(max(n, m)))
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        long long opt1 = n * b;
        long long opt2 = m * a;
        long long opt3 = (n - a + 1) * m;
        long long opt4 = (m - b + 1) * n;

        long long minVal = min(min(min(opt1, opt2), opt3), opt4);
        long long x = -1;
        long long y = -1;
        x = n;
        y = b;
        int res = 1e5;
        int temp = 1;
        while (x * y != 1) {
            if (x != 1) {
                x = ceil((double) x / 2);
                temp++;
                continue;
            }

            if (y != 1) {
                y = ceil((double) y / 2);
                temp++;
                continue;
            }
        }
        res = min(res, temp);

        x = m;
        y = a;
        temp = 1;
        while (x * y != 1) {
            if (x != 1) {
                x = ceil((double) x / 2);
                temp++;
                continue;
            }

            if (y != 1) {
                y = ceil((double) y / 2);
                temp++;
                continue;
            }
        }
        res = min(temp, res);

        x = (n - a + 1);
        y = m;
        temp = 1;
        while (x * y != 1) {
            if (x != 1) {
                x = ceil((double) x / 2);
                temp++;
                continue;
            }

            if (y != 1) {
                y = ceil((double) y / 2);
                temp++;
                continue;
            }
        }
        res = min(temp, res);

        x = (m - b + 1);
        y = n;
        temp = 1;
        while (x * y != 1) {
            if (x != 1) {
                x = ceil((double) x / 2);
                temp++;
                continue;
            }

            if (y != 1) {
                y = ceil((double) y / 2);
                temp++;
                continue;
            }
        }
        res = min(temp, res);
        cout << res << endl;
    }
}