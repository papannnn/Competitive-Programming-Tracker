#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2110/A
// O(t * n log n)
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

        sort(arr.begin(), arr.end());

        int tail = arr[arr.size() - 1] % 2;
        int cnt1 = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if ((arr[i] % 2) == tail) {
                break;
            }
            cnt1++;
        }

        int head = arr[0] % 2;
        int cnt2 = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if ((arr[i] % 2) == head) {
                break;
            }
            cnt2++;
        }
        cout << min(cnt1, cnt2) << endl;
    }
}