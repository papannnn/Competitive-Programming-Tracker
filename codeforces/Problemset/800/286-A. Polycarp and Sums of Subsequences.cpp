#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1618/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(7);
        for (int &num : arr) {
            cin >> num;
        }

        int biggest = arr[arr.size() - 1];
        int sum = arr[0] + arr[1];
        int last = sum + arr[2] == biggest ? arr[2] : arr[3];
        cout << arr[0] << " " << arr[1] << " " << last << endl;
    }
}