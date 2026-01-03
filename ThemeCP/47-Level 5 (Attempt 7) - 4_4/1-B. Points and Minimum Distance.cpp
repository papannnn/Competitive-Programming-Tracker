#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1895/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n * 2);
        for (int &num : arr1) {
            cin >> num;
        }

        sort(arr1.begin(), arr1.end());
        int sum = 0;
        for (int i = 1; i < arr1.size() / 2; i++) {
            sum += abs(arr1[i] - arr1[i - 1]);
            sum += abs(arr1[i + arr1.size() / 2] - arr1[i + arr1.size() / 2 - 1]);
        }
        cout << sum << endl;
        for (int i = 0; i < arr1.size() / 2; i++) {
            cout << arr1[i] << " " << arr1[i + arr1.size() / 2] << endl;
        }
    }
}