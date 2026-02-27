#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1899/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;


        for (int i = 1 ; i <= n; i++) {
            if (n % i) {
                continue;
            }

            // for (int j = 0; j < n; j += i) {
            //     for (int k = )
            // }
        }

        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }
        cout << endl;
    }
}