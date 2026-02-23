#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1729/D
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr1(n);
        vector<long long> arr2(n);
        for (long long &num : arr1) {
            cin >> num;
        }

        for (long long &num : arr2) {
            cin >> num;
        }

        vector<long long> pocket;
        vector<long long> minusPocket;
        for (int i = 0 ; i < n; i++) {
            long long val = arr2[i] - arr1[i];
            if (val < 0) {
                minusPocket.push_back(val);
            } else {
                pocket.push_back(val);
            }
        }

        sort(pocket.begin(), pocket.end());
        sort(minusPocket.begin(), minusPocket.end(), greater<long long>());
        // for (long long &num : pocket) {
        //     cout << num << " ";
        // }
        // cout << endl;

        // for (long long &num : minusPocket) {
        //     cout << num << " ";
        // }
        // cout << endl;
        int res = 0;
        while (!pocket.empty()) {
            long long val = pocket.back();
            pocket.pop_back();

            while (!minusPocket.empty() && minusPocket.back() + val < 0) {
                minusPocket.pop_back();
            }
            
            if (!minusPocket.empty() && minusPocket.back() + val >= 0) {
                minusPocket.pop_back();
                res++;
                continue;
            }

            if (!pocket.empty()) {
                pocket.pop_back();
                res++;
                continue;
            }
            break;
        }
        cout << res << endl;

    }
}