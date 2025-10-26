#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1792/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int one = 0;
        for (int &num : arr) {
            cin >> num;
            if (num == 1) {
                one++;
            }
        }

        int other = arr.size() - one;
        int res = ceil((double) one / 2);
        cout << res + other << endl;
    }
}