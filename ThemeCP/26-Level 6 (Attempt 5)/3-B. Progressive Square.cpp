#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1955/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<vector<int>> arr;

        vector<int> numList(n * n);
        unordered_map<int, int> mapping;
        int minVal = 1e9;
        for (int &num : numList) {
            cin >> num;
            mapping[num]++;
            minVal = min(minVal, num);
        }
        for (int i = 0 ; i < n; i++) {
            vector<int> temp(n);
            arr.push_back(temp);
        }

        arr[0][0] = minVal;
        mapping[minVal]--;
        bool valid = true;
        for (int i = 1; i < arr[0].size(); i++) {
            if (!mapping[arr[0][i - 1] + d]) {
                valid = false;
                break;
            }

            arr[0][i] = arr[0][i - 1] + d;
            mapping[arr[0][i - 1] + d]--;
        }

        if (!valid) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 1 ; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!mapping[arr[i - 1][j] + c]) {
                    valid = false;
                    break;
                }

                arr[i][j] = arr[i - 1][j] + c;
                mapping[arr[i - 1][j] + c]--;
            }
        }
        if (!valid) {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;
        }
    }
}