#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1797/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> arr(n, vector<int>(n));
        int one = 0;
        int zero = 0;
        for (vector<int> &a : arr) {
            for (int &num : a) {
                cin >> num;
                if (num == 1) {
                    one++;
                } else {
                    zero++;
                }
                // cout << num << " ";
            }
            // cout << endl;
        }

        vector<vector<int>> secondArr(n, vector<int>(n));
        bool valid = true;
        int x = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            for (int j = arr[i].size() - 1; j >= 0; j--) {
                if (arr[arr.size() - i - 1][arr.size() - j - 1] != arr[i][j]) {
                    x++;
                }
            }
        }

        x /= 2;
        if (x > k) {
            cout << "NO" << endl;
        } else {
            k -= x;
            if (n % 2 == 1) {
                cout << "YES" << endl;
            } else if (k % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

/*
1 0 1 1
1 0 0 0
0 1 0 1
1 1 0 1

1 0 1 1
1 0 1 0
0 0 0 1
1 1 0 1
*/