#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2074/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }
        sort(arr.begin(), arr.end());
        while (arr.size() != 1) {
            int a = arr[0];
            int b = arr[1];
            int c = a + b - 1;
            arr.push_back(c);
            arr.pop_front();
            arr.pop_front();
        }
        cout << arr[0] << endl;
    }
}