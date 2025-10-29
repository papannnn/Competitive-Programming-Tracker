#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1196/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long biggest = max(a, max(b, c));
        long long med = max(min(a, b), min(max(a, b), c));
        long long smallest = min(min(a, b), c);

        biggest -= abs(med - smallest);
        med += biggest / 2;
        cout << med << endl;
    }
}