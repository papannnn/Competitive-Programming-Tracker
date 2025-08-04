#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1348/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    vector<long long> preprocess;
    for (int i = 1; i <= 30; i++) {
        preprocess.push_back(pow(2, i));
    }

    while (t--) {
        int n;
        cin >> n;

        if (n == 2) {
            cout << 2 << endl;
            continue;
        }

        long long left = 0;
        long long right = 0;
        for (int i = 0; i < n / 2 - 1; i++) {
            left += preprocess[i];
        }
        left += preprocess[n - 1];

        for (int i = n / 2 - 1; i < n - 1; i++) {
            right += preprocess[i];
        }
        cout << abs(left - right) << endl;
    }
}