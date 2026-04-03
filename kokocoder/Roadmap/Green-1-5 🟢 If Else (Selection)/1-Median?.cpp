#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    int b = arr[1];
    sort(arr.begin(), arr.end());
    cout << (b == arr[1] ? "Yes" : "No") << endl;;
}