#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1816/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0 ; i < 2; i++) {
            vector<int> temp(n);
            if (i == 0) {
                temp[0] = n * 2;
            } else {
                temp[temp.size() - 1] = n * 2 - 1;
            }
            arr.push_back(temp);
        }

        bool isDown = true;
        int val = n * 2 - 2;
        for (int i = 1; i < n - 1; i++) {
            arr[isDown][i] = val--;
            isDown = !isDown;
        }

        val = 1;
        isDown = false;;
        for (int i = n - 1 ; i >= 0; i--) {
            arr[isDown][i] = val++;
            isDown = !isDown;
        }
        
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[i].size(); j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        // cout << endl;
    }
}