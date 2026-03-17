#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/greedilyincreasing
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    int curr = arr[0];
    vector<int> res;
    res.push_back(curr);
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] > curr) {
            curr = arr[i];
            res.push_back(curr);
        }
    }

    cout << res.size() << endl;
    for (int &num : res) {
        cout << num << " ";
    }
    cout << endl;
}
