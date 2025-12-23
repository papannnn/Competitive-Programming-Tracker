#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1825/B
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n * m);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        long long res = 0;
        int head = arr[0];
        int tail1 = arr[arr.size() - 1];
        int tail2 = arr[arr.size() - 2];
        long long temp = 0;
        for (int i = 0; i < min(n, m) - 1; i++) {
            temp += abs(head - tail2);
        }

        for (int i = 0 ; i < max(n, m) - 1; i++) {
            temp += abs(head - tail1);
        }

        for (int i = 0; i < min(n, m) - 1; i++) {
            for (int j = 0 ; j < max(n, m) - 1; j++) {
                temp += abs(head - tail1);
            }
        }
        res = max(temp, res);

        temp = 0;
        head = arr[arr.size() - 1];
        tail1 = arr[0];
        tail2 = arr[1];
        for (int i = 0; i < min(n, m) - 1; i++) {
            temp += abs(head - tail2);
        }

        for (int i = 0 ; i < max(n, m) - 1; i++) {
            temp += abs(head - tail1);
        }

        for (int i = 0; i < min(n, m) - 1; i++) {
            for (int j = 0 ; j < max(n, m) - 1; j++) {
                temp += abs(head - tail1);
            }
        }
        res = max(temp, res);
        cout << res << endl;
    }
}