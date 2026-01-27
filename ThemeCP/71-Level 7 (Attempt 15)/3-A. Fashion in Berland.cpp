#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/691/problem/A
// O(t * n)
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    int fast = 0;
    for (int &num : arr) {
        cin >> num;
        fast += num;
    }

    if (n == 1) {
        cout << (fast == 1 ? "YES" : "NO") << endl;
        return 0;
    }

    cout << (n - fast == 1 ? "YES" : "NO") << endl;
}