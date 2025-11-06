#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1559/A
// O(t * n ^ 2)
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

        if (arr.size() == 1) {
            cout << arr[0] << endl;
            continue;
        }

        for (int i = 0 ; i < arr.size(); i++) {
            for (int j = arr.size() - 1; j > i; j--) {
                arr[i] = arr[i] & arr[j];
            }
            arr[arr.size() - 1] = arr[arr.size() - 1] & arr[i];
        }
        int maxVal = -1;
        for (int &num : arr) {
            maxVal = max(maxVal, num);
        }
        cout << maxVal << endl;
    }
}