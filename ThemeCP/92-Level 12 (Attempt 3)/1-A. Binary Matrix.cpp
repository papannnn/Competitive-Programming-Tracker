#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2082/A
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m));
        for (vector<char> &a : arr) {
            for (char &num : a) {
                cin >> num;
            }
        }

    }
}