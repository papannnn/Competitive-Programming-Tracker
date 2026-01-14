#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2180/B
// O(t * n * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        string res = arr[0];
        for (int i = 1; i < arr.size(); i++) {

            string a = arr[i] + res;
            string b = res + arr[i];

            if (a.compare(b) > 0) {
                res = b;
            } else {
                res = a;
            }
        }
        cout << res << endl;
    }
}