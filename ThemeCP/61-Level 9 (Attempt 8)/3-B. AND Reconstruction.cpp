#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1991/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i < arr.size() - 1; i++) {
            cin >> arr[i];
        }

        vector<int> res;
        for (int i = 1; i < arr.size(); i++) {
            res.push_back(arr[i - 1] | arr[i]);
        }

        bool valid = true;
        for (int i = 1; i < res.size(); i++) {
            if ((res[i - 1] & res[i]) != arr[i]) {
                valid = false;
            }
        }
        
        if (valid) {
            for (int &num : res) {
                cout << num << " ";
            }
        } else {
            cout << -1;
        }
        cout << endl;
    }
}