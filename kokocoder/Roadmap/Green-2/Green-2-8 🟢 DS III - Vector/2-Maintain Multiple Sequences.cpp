#include <bits/stdc++.h>

using namespace std;
// O(n * L + q)
int main () {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> arr;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> temp;
        while (m--) {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(move(temp));
    }

    while (q--) {
        int arrIdx, pos;
        cin >> arrIdx >> pos;
        arrIdx--;
        pos--;
        cout << arr[arrIdx][pos] << endl;
    }
}