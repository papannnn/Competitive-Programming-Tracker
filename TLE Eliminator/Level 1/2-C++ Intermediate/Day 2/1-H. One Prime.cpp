#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
// O(sqrt(n))
int main () {
    int n;
    cin >> n;
    bool valid = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "YES" : "NO") << endl;
}