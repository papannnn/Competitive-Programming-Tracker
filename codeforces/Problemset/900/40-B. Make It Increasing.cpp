#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1675/B
// O(t * n * log(max(a)))
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

        int len = arr.size();
        int res = 0;
        for (int i = len - 2; i >= 0; i--) {
            while (arr[i] != 0 && arr[i] >= arr[i + 1]) {
                arr[i] /= 2;
                res++;
            }

            if (arr[i] >= arr[i + 1]) {
                res = -1;
                break;
            }
        }
        cout << res << endl;
    }
}