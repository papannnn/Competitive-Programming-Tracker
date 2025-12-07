#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1930/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> res;
        int even = n % 2 == 1 ? n - 1 : n;
        int odd = 1;

        bool isEven = n % 2 == 0;
        for (int i = 0 ; i < n; i++) {
            if (isEven) {
                cout << even;
                even -= 2;
            } else {
                cout << odd;
                odd += 2;
            }
            cout << " ";
            isEven = !isEven;
        }
        cout << endl;
    }
}