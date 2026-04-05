#include <bits/stdc++.h>

using namespace std;
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    int minVal = 1e9;
    for (vector<int>& a : arr) {
        for (int &num : a) {
            cin >> num;
            minVal = min(minVal, num);
        }
    }
    int res = 0;
    for (vector<int>& a : arr) {
        for (int &num : a) {
            res += num - minVal;
        }
    }
    cout << res << endl;
}