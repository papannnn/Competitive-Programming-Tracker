#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/567/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }

    for (int i = 0 ; i < arr.size(); i++) {
        long long maxVal = -1;
        long long minVal = 1e18;
        if (i != 0) {
            maxVal = max(maxVal, abs(arr[i] - arr[0]));
            minVal = min(minVal, abs(arr[i] - arr[i - 1]));
        }

        if (i != arr.size() - 1) {
            maxVal = max(maxVal, abs(arr[i] - arr[arr.size() - 1]));
            minVal = min(minVal, abs(arr[i] - arr[i + 1]));
        }
        cout << minVal << " " << maxVal << endl;
    }
}