#include <bits/stdc++.h>

using namespace std;

void permutation(int idx, vector<int> &arr, vector<vector<int>> &res) {
    if (idx == arr.size()) {
        res.push_back(arr);
        return;
    }

    for (int i = idx; i < arr.size(); i++) {
        swap(arr[idx], arr[i]);
        permutation(idx + 1, arr, res);
        swap(arr[idx], arr[i]);        
    }
}


int main () {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
    }

    vector<vector<int>> res;
    permutation(0, arr, res);
    sort(res.begin(), res.end());
    for (vector<int> &arr : res) {
        bool valid = true;

        if (n >= 3) {
            for (int i = 0; i < arr.size() - 2; i++) {
                int maxVal = max(arr[i], max(arr[i + 1], arr[i + 2]));
                int minVal = min(arr[i], min(arr[i + 1], arr[i + 2]));

                for (int j = 0; j < 3; j++) {
                    valid &= arr[i + 1] == maxVal || arr[i + 1] == minVal;
                }
            }
        }
        

        if (!valid) {
            continue;
        }

        for (int &num : arr) {
            cout << num;
        }
        cout << endl;
    }
}