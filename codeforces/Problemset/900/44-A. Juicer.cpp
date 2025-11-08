#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/709/A
// O(t * n)
int main () {
    long long n, b, d;
    cin >> n >> b >> d;
    long long waste = 0;
    int res = 0;
    while (n--) {
        long long num;
        cin >> num;
        if (num > b) {
            continue;
        }

        waste += num;
        if (waste > d) {
            res++;
            waste = 0;
        }
    }
    cout << res << endl;
}