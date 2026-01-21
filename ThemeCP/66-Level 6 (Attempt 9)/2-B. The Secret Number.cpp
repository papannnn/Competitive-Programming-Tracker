#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2132/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> res;
        long long ten = 10;
        for (int i = 1; i <= 18; i++) {
            long long curr = ten + 1;
            if (n % curr == 0 && n >= curr) {
                res.push_back(n / curr);
            }
            ten *= 10;
        }
        
        cout << res.size() << endl;
        for (int i = res.size() - 1 ; i >= 0; i--) {
            cout << res[i] << " ";
        }
        if (res.size())
            cout << endl;
    }
}