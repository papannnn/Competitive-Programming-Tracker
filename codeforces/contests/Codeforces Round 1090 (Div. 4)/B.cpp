#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<long long> arr(7);
        for (long long &num : arr) {
            cin >> num;
            num *= -1;
        }

        sort(arr.begin(), arr.end());

        long long res = 0;
        for (int i = 1 ; i < arr.size(); i++) {
            res += arr[i];
        }

        res += arr[0] * -1;
        cout << res << endl;
    }
}