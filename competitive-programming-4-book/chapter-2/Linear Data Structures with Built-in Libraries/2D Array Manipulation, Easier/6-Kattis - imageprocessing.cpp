#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/imageprocessing
// O(h * w * n * m)
int main () {
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    vector<vector<int>> image(h, vector<int>(w));
    for (vector<int> &arr : image) {
        for (int &n : arr) {
            cin >> n;
        }
    }

    vector<vector<int>> kernel(n, vector<int>(m));
    for (vector<int> &arr : kernel) {
        for (int &n : arr) {
            cin >> n;
        }
    }
    vector<vector<int>> realKernel(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            realKernel[i][j] = kernel[n - i - 1][m - j - 1];
        }
    }

    for (int i = 0; i <= h - n; i++) {
        for (int j = 0; j <= w - m; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    sum += image[i + k][j + l] * realKernel[k][l];
                }
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}