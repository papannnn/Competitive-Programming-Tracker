#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1529/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        int minVal = 1e8;
        for (int &num : arr) {
            cin >> num;
            minVal = min(minVal, num);
            mapping[num]++;
        }

        cout << arr.size() - mapping[minVal] << endl;
    }
}