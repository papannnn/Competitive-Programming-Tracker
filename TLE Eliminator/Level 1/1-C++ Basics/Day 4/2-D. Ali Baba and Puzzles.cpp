#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
// O(1)
int main () {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b - c == d) {
        cout << "YES" << endl;
        return 0;
    }

    if (a + b * c == d) {
        cout << "YES" << endl;
        return 0;
    }

    if (a - b + c == d) {
        cout << "YES" << endl;
        return 0;
    }

    if (a - b * c == d) {
        cout << "YES" << endl;
        return 0;
    }

    if (a * b + c == d) {
        cout << "YES" << endl;
        return 0;
    }

    if (a * b - c == d) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
}