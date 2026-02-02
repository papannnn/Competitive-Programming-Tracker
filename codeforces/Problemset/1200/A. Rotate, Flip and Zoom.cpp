#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/523/problem/A
// O(w * h)
int main () {
    int w, h;
    cin >> w >> h;
    vector<vector<char>> arr(h, vector<char>(w));
    for (vector<char>& a : arr) {
        for (char& c : a) {
            cin >> c;
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << arr[j][i];
            cout << arr[j][i];
        }
        cout << endl;
        for (int j = 0; j < h; j++) {
            cout << arr[j][i];
            cout << arr[j][i];
        }
        cout << endl;
    }
}