#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2104/B
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
        int maxVal = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            maxVal = max(maxVal, arr[i]);
            prefix.push_back(maxVal);
        }

        long long sum = 0;
        for (int i = arr.size() - 1; i >= 1; i--) {
            cout << sum + prefix[i] << " ";
            sum += arr[i];
        }
        cout << sum + arr[0];
        cout << endl;
    }
}