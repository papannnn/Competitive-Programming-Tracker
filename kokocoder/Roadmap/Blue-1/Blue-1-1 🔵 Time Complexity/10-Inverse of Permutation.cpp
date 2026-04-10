#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> res(n + 1);
    for (int i = 1; i < arr.size(); i++) {
        res[arr[i]] = i;
    }

    for (int i = 1; i < arr.size(); i++) {
        cout << res[i] << " ";
    }
}