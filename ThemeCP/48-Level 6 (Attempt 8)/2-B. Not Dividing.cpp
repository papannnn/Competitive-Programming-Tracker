#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1794/B
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

        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 1) {
                arr[i]++;
            }

            if (i != 0 && arr[i] % arr[i - 1] == 0) {
                arr[i]++;
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
