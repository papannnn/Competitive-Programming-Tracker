#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, x;
    cin >> n >> x;
    int diff = 1e9;
    int res = 1e9;
    while (n--) {
        int num;
        cin >> num;

        if (abs(num - x) <= diff) {
            if (abs(num - x) == diff) {
                res = min(res, num);
            } else {
                res = num;
            }
            diff = abs(num - x);
        }
    }
    cout << res << endl;
}