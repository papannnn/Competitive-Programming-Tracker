#include <bits/stdc++.h>

using namespace std;
// O(n log n)
int main () {
    int n;
    cin >> n;
    set<int> s;
    int res = 1;
    while (s.find(n) == s.end()) {
        s.insert(n);
        res++;
        if (n % 2) {
            n = n * 3 + 1;
        } else {
            n /= 2;
        }
    }
    cout << res << endl;
}