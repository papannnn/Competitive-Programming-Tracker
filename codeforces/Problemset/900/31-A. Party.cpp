#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/115/A
// O(n ^ 2)
int main () {
    int n;
    cin >> n;
    vector<int> arr (n + 1);
    unordered_map<int, int> mapping;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        mapping[i] = arr[i];
    }

    int maxVal = 1;
    for (int i = 1; i <= n; i++) {
        int cnt = 1;
        int boss = arr[i];
        while (boss != -1) {
            cnt++;
            boss = mapping[boss];
        }
        maxVal = max(maxVal, cnt);
    }

    cout << maxVal << endl;
}