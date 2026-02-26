#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1914/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr1(n);
        for (long long &num : arr1) {
            cin >> num;
        }

        vector<long long> arr2(n);
        for (long long &num : arr2) {
            cin >> num;
        }

        long long maxRepeat = -1;
        long long totCompletion = 0;
        long long res = 0;
        for (int i = 0 ; i < arr1.size(); i++) {
            if (k == 0) {
                break;
            }
            maxRepeat = max(maxRepeat, arr2[i]);
            totCompletion += arr1[i];
            k--;
            res = max(res, totCompletion + maxRepeat * k);
        }
        cout << res << endl;
    }
}