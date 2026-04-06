#include <bits/stdc++.h>

using namespace std;
// O(n * (n + 1) / 2)
int main () {
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j <= i; j++) {
            int val;
            cin >> val;
            temp.push_back(val);
        }
        arr.push_back(move(temp));
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        j = arr[max(i, j)][min(i, j)];
        j--;
    }
    cout << j + 1 << endl;
}
