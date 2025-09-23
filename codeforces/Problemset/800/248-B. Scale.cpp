#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1996/B
// O(t * n * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> arr;
        for (int i = 0 ; i < n; i++) {
            vector<char> temp;
            for (int j = 0; j < n; j++) {
                char c;
                cin >> c;
                temp.push_back(c);
            }
            arr.push_back(temp);
        }

        for (int i = 0 ; i < arr.size(); i += k) {
            for (int j = 0; j < arr[i].size() ; j += k) {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}