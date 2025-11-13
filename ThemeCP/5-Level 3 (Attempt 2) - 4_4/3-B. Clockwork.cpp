#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2062/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int minVal = 1e9;
        for (int &num : arr) {
            cin >> num;
            minVal = min(minVal, num);
        }

        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            int len = arr.size();
            int maxDist = max(i, len - 1 - i);
            if (arr[i] <= maxDist * 2) {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}