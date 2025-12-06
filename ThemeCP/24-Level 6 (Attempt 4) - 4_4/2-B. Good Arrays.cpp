#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1856/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        long long excess = 0;
        int one = 0;
        for (int &num : arr) {
            cin >> num;
            if (num == 1) {
                one++;
            }
            excess += num - 1;
        }

        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }
        cout << (one > excess ? "NO" : "YES") << endl;        
    }
}