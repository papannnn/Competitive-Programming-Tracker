#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1980/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
        }

        int fav = arr[f - 1];
        int favCnt = mapping[fav];
        sort(arr.begin(), arr.end(), greater<int>());
        for (int i = 0 ; i < k; i++) {
            mapping[arr[i]]--;
        }

        if (mapping[fav] == 0) {
            cout << "YES" << endl;
        } else if (mapping[fav] == favCnt) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
}