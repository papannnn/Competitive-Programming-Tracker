#include <bits/stdc++.h>

using namespace std;
int main () {
    long long n;
    cin >> n;
    long long res = 0;
    long long curr = 5;
    while (curr <= n) {
        res += n / curr;
        curr *= 5;
    }
    cout << res << endl;
}