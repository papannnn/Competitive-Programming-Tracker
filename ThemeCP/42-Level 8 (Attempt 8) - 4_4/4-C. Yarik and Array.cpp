#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1899/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        vector<int> prefix;
        vector<int> prevParity;
        prefix.push_back(arr[0]);
        prevParity.push_back(abs(arr[0]) % 2);
        // int sum = 0;
        for (int i = 1; i < n; i++) {
            int prev = 0;
            int currParity = abs(arr[i]) % 2;
            if (currParity != prevParity[i - 1]) {
                prev = prefix[i - 1];
            }
            prefix.push_back(max(arr[i], prev + arr[i]));
            prevParity.push_back(currParity);
        }

        int maxVal = -1e9;
        for (int i = 0 ; i < prefix.size(); i++) {
            maxVal = max(maxVal, prefix[i]);
        }
        cout << maxVal << endl;
    }
}