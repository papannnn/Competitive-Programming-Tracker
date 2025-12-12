#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1763/A
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

        int minVal = 1e9;
        int maxVal = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            int minTemp = arr[i];
            int maxTemp = 0;
            for (int j = 0 ; j < arr.size(); j++) {
                maxTemp |= arr[j];
                if (j == i) {
                    continue;
                }
                minTemp = minTemp & arr[j];
                // int valPlus = arr[i]
            }
            minVal = min(minVal, minTemp);
            maxVal = max(maxVal, maxTemp);
        }
        // cout << arr[arr.size() - 1] << endl;
        cout << maxVal - minVal << endl;
    }
}