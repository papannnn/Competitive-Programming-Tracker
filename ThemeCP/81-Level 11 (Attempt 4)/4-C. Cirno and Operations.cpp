#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2062/C
// O(t * n^2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long res = 0;
        for (long long &num : arr) {
            cin >> num;
            res += num;
        }

        if (arr.size() == 1) {
            cout << res << endl;
            continue;
        }

        while (arr.size() != 1) {
            vector<long long> temp;
            for (int i = 0; i < arr.size() - 1; i++) {
                temp.push_back(arr[i + 1] - arr[i]);
            }

            arr = move(temp);
            long long sum = 0;
            for (int i = 0 ; i < arr.size(); i++) {
                sum += arr[i];
            }

            res = max(res, abs(sum));
        }
        cout << res << endl;
    }
}