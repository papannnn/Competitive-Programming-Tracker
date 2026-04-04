#include <bits/stdc++.h>

using namespace std;
// O(n + m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    long long res = 0;
    while (m--) {
        int idx;
        cin >> idx;
        res += arr[idx - 1];
    }
    cout << res << endl;
}