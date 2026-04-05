#include <bits/stdc++.h>

using namespace std;
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (vector<int> & a : arr) {
        for (int &num : a) {
            cin >> num;
        }
    }

    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
}