#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2041/B
// O(t * log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int c = min(a, b);
        int d = max(a, b);
        int next = 1;
        bool isC = true;
        while (true) {
            if (isC) {
                if (c >= next) {
                    c -= next;
                    next++;
                } else {
                    isC = false;
                }
            } else {
                if (d >= next) {
                    d -= next;
                    next++;
                } else {
                    if (c + d >= next) {
                        next++;
                    }
                    break;
                }
            }
        }
        cout << next - 1 << endl;
    }
}