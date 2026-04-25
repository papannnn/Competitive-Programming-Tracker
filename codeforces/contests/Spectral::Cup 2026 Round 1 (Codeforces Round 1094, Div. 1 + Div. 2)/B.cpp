#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        vector<long long> arr1(m);
        for (long long &num : arr1) {
            cin >> num;
        }

        vector<long long> oddIdx;
        vector<long long> evenIdx;
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                evenIdx.push_back(arr[i]);
            } else {
                oddIdx.push_back(arr[i]);
            }
        }

        sort(oddIdx.begin(), oddIdx.end());
        sort(evenIdx.begin(), evenIdx.end());
        // for (long long &num : oddIdx) {
        //     cout << num << " ";
        // }
        // cout << endl;

        // for (long long &num : evenIdx) {
        //     cout << num << " ";
        // }
        // cout << endl;
        bool evenDone = false;
        bool oddDone = false;
        for (int i = 0 ; i < arr1.size(); i++) {
            long long val = arr1[i] - 1;
            if (val % 2 == 0) {
                if (evenIdx.back() < 0 && evenDone) {
                    continue;
                }

                if (!evenIdx.empty()) {
                    evenIdx.pop_back();
                    evenDone = true;
                }
            } else {
                if (oddIdx.back() < 0 && oddDone) {
                    continue;
                }

                if (!oddIdx.empty()) {
                    oddIdx.pop_back();
                    oddDone = true;
                }
            }
        }

        // for (long long &num : oddIdx) {
        //     cout << num << " ";
        // }
        // cout << endl;

        // for (long long &num : evenIdx) {
        //     cout << num << " ";
        // }
        // cout << endl;

        long long res = 0;
        for (long long &num : oddIdx) {
            res += num;
        }

        for (long long &num : evenIdx) {
            res += num;
        }
        cout << res << endl;
    }
}