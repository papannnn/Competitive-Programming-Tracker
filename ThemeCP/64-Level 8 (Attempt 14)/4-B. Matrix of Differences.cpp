#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1783/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n));
        arr[0][0] = 1;
        int prev = 1;
        int next = n * n - 1;
        bool isAdd = true;
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                // Front
                for (int j = 0; j < arr.size(); j++) {
                    if (i == 0 && j == 0) {
                        continue;
                    }

                    if (isAdd) {
                        arr[i][j] = prev + next;
                    } else {
                        arr[i][j] = prev - next;
                    }
                    prev = arr[i][j];
                    next--;
                    isAdd = !isAdd;
                }
            } else {
                // Back
                for (int j = arr.size() - 1; j >= 0; j--) {
                    if (isAdd) {
                        arr[i][j] = prev + next;
                    } else {
                        arr[i][j] = prev - next;
                    }
                    prev = arr[i][j];
                    next--;
                    isAdd = !isAdd;
                }
            }
        }

        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}