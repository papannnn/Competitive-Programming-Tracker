#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    for (int &num : arr1) {
        cin >> num;
    }

    for (int &num : arr2) {
        cin >> num;
    }

    vector<vector<int>> memo(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr1[i - 1] == arr2[j - 1]) {
                memo[i][j] = memo[i - 1][j - 1] + 1;
            } else {
                memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]);
            }
        }
    }
    cout << memo[n][n] << endl;
}