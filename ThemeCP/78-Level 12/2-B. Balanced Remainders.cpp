#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1490/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> remain(3);
        for (int &num : arr) {
            cin >> num;
            remain[num % 3]++;
        }

        if (remain[0] == remain[1] && remain[1] == remain[2]) {
            cout << 0 << endl;
            continue;
        }

        int target = n / 3;
        int res = 0;
        if (remain[0] < target) {
            remain[2] -= target - remain[0];
            res += target - remain[0];;
            remain[0] = target;
        }

        if (remain[1] < target) {
            remain[0] -= target - remain[1];
            res += target - remain[1];;
            remain[1] = target;
        }

        if (remain[2] < target) {
            remain[1] -= target - remain[2];
            res += target - remain[2];;
            remain[2] = target;
        }

        if (remain[0] < target) {
            remain[2] -= target - remain[0];
            res += target - remain[0];;
            remain[0] = target;
        }

        if (remain[1] < target) {
            remain[0] -= target - remain[1];
            res += target - remain[1];;
            remain[1] = target;
        }

        if (remain[2] < target) {
            remain[1] -= target - remain[2];
            res += target - remain[2];;
            remain[2] = target;
        }
        cout << res << endl;
    }
}