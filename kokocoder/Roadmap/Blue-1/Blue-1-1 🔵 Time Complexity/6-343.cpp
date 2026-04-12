#include <bits/stdc++.h>

using namespace std;
// O(sqrt3(n))
bool check(long long i) {
    string s = to_string(i);
    string s1 = s;
    reverse(s1.begin(), s1.end());
    return s == s1;
}

int main () {
    long long n;
    cin >> n;

    long long res = 1;
    for (long long i = 1; i * i * i <= n; i++) {
        if (check(i * i * i)) {
            res = i * i * i;
        }
    }
    cout << res << endl;
}