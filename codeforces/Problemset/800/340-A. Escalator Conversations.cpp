#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1851/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] % k != H % k) {
                continue;
            }

            if (arr[i] == H) {
                continue;
            }

            if (abs((arr[i] - (arr[i] % k)) - (H - (H % k))) >= m * k) {
                continue;
            }
            
            res++;
        }
        cout << res << endl;
    }
}