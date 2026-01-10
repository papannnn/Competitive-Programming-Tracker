#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2027/B
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

        int res = 1e5;
        for (int i = 0; i < arr.size(); i++) {
            int temp = i;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] > arr[i]) {
                    temp++;
                }
            }
            res = min(res, temp);
        }
        cout << res << endl;
    }
}