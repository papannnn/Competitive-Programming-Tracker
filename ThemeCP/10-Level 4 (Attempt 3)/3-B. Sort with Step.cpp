#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1823/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n + 1);
        for (int i = 1; i < arr.size(); i++) {
            int num;
            cin >> num;
            arr[i] = num;
        }

        int cnt = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] % k == i % k) {
                continue;
            }
            cnt++;
        }
        
        if (cnt == 0) {
            cout << 0 << endl;
        } else if (cnt == 2) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}