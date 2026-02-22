#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1520/D
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        map<int, int> mapping;
        long long res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            res += mapping[arr[i] - i];
            mapping[arr[i] - i]++;
        }
        cout << res << endl;
    }
}
