#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1557/A
// O(t * n)
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double t;
    cin >> t;
    while (t--) {
        double n;
        cin >> n;
        vector<double> arr(n);
        for (double &num : arr) {
            cin >> num;
        }

        double l = -1e10;
        int idx = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (l < arr[i]) {
                l = arr[i];
                idx = i;
            }
        }
        double r = 0;
        for (double i = 0; i < arr.size(); i++) {
            if (i == idx) {
                continue;
            }
            r += arr[i];
        }
        
        r = r / (arr.size() - 1);
        cout << fixed << setprecision(6) << (l + r)  << endl;
    }
}