#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1767/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        int tower;
        cin >> tower;
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());

        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] > tower) {
                tower += ceil(((double) arr[i] - tower) / 2);
            }
        }
        cout << tower << endl;
    }
}
