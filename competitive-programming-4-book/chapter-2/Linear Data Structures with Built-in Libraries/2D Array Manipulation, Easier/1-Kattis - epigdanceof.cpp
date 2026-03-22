#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/epigdanceoff
// O(n * m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (string &s : arr) {
        cin >> s;
    }

    int res = 0;
    for (int i = 0; i < m; i++) {
        bool valid = true;
        for (int j = 0; j < n; j++) {
            valid &= arr[j][i] == '_';
        }
        res += valid;
    }
    
    cout << res + 1 << endl;
}