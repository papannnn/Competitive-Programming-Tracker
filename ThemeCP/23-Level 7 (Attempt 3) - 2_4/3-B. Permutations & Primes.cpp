#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1844/B
// O()
int main () {
    vector<bool> prime(1e5 + 1);
    for (int i = 2; i * i <= prime.size(); i++) {
        if (prime[i]) {
            continue;
        }

        for (int j = i * i; j <= prime.size(); j += i) {
            prime[j] = true;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        if (n == 2) {
            cout << 2 << " " << 1 << endl;
            continue;
        }

        vector<int> res(n);
        res[0] = 2;
        res[res.size() / 2] = 1;
        res[res.size() - 1] = 3;
        int val = 4;
        for (int i = 0 ; i < n; i++) {
            if (res[i] == 0) {
                res[i] = val++;
            }
        }
        for (int &num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}