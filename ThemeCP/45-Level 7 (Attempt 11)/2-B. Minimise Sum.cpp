#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2124/B
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

        long long temp = arr[0] + arr[1];

        long long res = arr[0];
        int prev = arr[0];
        for (int i = 1 ; i < arr.size(); i++) {
            if (arr[i] < prev) {
                prev = arr[i];
                res += prev;
            } else {
                res += prev;
                prev = 0;
            }
        }
        cout << min(temp, res) << endl;
    }
}

// 5 4 3 2 1
// 