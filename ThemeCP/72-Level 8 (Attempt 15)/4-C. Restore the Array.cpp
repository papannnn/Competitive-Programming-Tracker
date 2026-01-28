#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1811/problem/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n - 1);
        for (int &num : arr) {
            cin >> num;
        }

        bool flag = true;
        vector<int> res;
        for (int i = 0 ; i < arr.size() - 1; i++) {
            if (flag) {
                res.push_back(arr[i]);
                if (arr[i] < arr[i + 1]) {
                    res.push_back(0);
                    flag = false;

                }
            } else {
                if (arr[i] > arr[i + 1]) {
                    res.push_back(arr[i + 1]);
                } else {
                    res.push_back(arr[i]);
                }
            }
        }

        res.push_back(arr.back());
        if (flag) {
            res.push_back(0);
        }

        for (int &num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
}