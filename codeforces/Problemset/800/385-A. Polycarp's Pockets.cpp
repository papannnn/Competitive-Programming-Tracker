#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1003/A
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(101);
    int res = 0;
    while (n--) {
        int num;
        cin >> num;
        arr[num]++;
        res = max(res, arr[num]);
    }
    cout << res << endl;
}