#include <bits/stdc++.h>

using namespace std;
// O(log(max(a, b)))
int main () {
    long long a, b;
    cin >> a >> b;
    long long res = 0;
    while (a != b) {
        if (a > b) {
            if (a % b == 0) {
                res += a / b - 1;
                a -= (a / b - 1) * b;
            } else {
                res += a / b;
                a = a % b;
            }
        } else {
            if (b % a == 0) {
                res += b / a - 1;
                b -= (b / a - 1) * a;
            } else {
                res += b / a;
                b = b % a;
            }
        }
    }
    cout << res << endl;
}