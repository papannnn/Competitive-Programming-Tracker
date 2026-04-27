#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        int res = 0;
        for (int i = 1 ; i <= n; i++) {
            cin >> arr[i];
            res = gcd(res, abs(i - arr[i]));
        }
        cout << res << endl;
    }
}