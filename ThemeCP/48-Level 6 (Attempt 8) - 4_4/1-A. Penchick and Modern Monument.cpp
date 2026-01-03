#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2031/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        int maxVal = 0;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
            maxVal = max(maxVal, mapping[num]);
        }

        cout << n - maxVal << endl;
    }
}