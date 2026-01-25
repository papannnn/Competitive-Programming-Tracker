#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr1(n);
        for (int &num : arr1) {
            cin >> num;
        }

        vector<int> arr2(n);
        for (int &num : arr2) {
            cin >> num;
        }

        arr1[arr1.size() - 1] = max(arr1[arr1.size() - 1], arr2[arr2.size() - 1]);
        for (int i = arr1.size() - 2; i >= 0; i--) {
            arr1[i] = max(arr1[i], max(arr1[i + 1], arr2[i]));
        }

        vector<long long> prefixSum;
        long long sum = 0;
        for (int i = 0 ; i < arr1.size(); i++) {
            sum += arr1[i];
            prefixSum.push_back(sum);
        }
        
        // for (int &num : arr1) {
        //     cout << num << " ";
        // }
        // cout << endl;

        // for (long long &num : prefixSum) {
        //     cout << num << " ";
        // }
        // cout << endl;
        
        for (int i = 0 ; i < q; i++) {
            int l, r;
            cin >> l >> r;
            cout << prefixSum[r - 1] - (prefixSum[l - 1] - arr1[l - 1]) << " ";
        }
        cout << endl;
    }
}