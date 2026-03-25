#include <bits/stdc++.h>

using namespace std;
// O(t)
// https://open.kattis.com/problems/height
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(20);
        for (int &num : arr) {
            cin >> num;
        }

        int res = 0;
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i + 1; j >= 1; j--) {
                if (arr[j] < arr[j - 1]) {
                    swap(arr[j], arr[j - 1]);
                    res++;
                } else {
                    break;
                }
            }
        }

        cout << n << " " << res << endl;
    }
}