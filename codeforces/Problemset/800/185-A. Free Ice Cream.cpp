#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/686/A
// O(n)
int main () {
    long long n, x;
    cin >> n >> x;
    int sad = 0;
    while (n--) {
        char c;
        int amt;
        cin >> c >> amt;
        if (c == '-') {
            if (x < amt) {
                sad++;
            } else {
                x -= amt;
            }
        } else {
            x += amt;
        }
    }
    cout << x << " " << sad << endl;
}