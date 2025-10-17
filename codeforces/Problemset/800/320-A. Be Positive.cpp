#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2149/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int minOne = 0;
        int zero = 0;
        for (int &num : arr) {
            cin >> num;
            if (num == 0) {
                zero++;
            }

            if (num == -1) {
                minOne++;
            }
        }

        minOne = minOne % 2;
        cout << zero + minOne * 2 << endl;
    }
}