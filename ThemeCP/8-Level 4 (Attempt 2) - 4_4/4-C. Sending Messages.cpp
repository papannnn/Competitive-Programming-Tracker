#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1921/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        long long curr = 0;
        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            long long drain = arr[i] - curr;
            f -= min(drain * a, b);
            if (f <= 0) {
                valid = false;
                break;
            }
            curr = arr[i];
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}