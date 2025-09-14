#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1866/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    int res = 10000000;
    for (int &num : arr) {
        cin >> num;
        res = min(res, abs(num));
    }
    cout << res << endl;
}