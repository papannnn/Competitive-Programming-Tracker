#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2167/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int odd = 0;
        int even = 0;
        for (int &num : arr) {
            cin >> num;
            odd += num % 2 == 1;
            even += num % 2 == 0;
        }

        if (odd && even) {
            sort(arr.begin(), arr.end());
        }

        for (int &num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
}