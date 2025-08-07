#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1788/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int twoCnt = 0;
        vector<int> arr(n);
        for (int &val : arr) {
            cin >> val;
            if (val == 2) {
                twoCnt++;
            }
        }
        
        if (twoCnt % 2) {
            cout << -1 << endl;
            continue;
        }

        if (twoCnt == 0) {
            cout << 1 << endl;
            continue;
        }

        int idx = 0;
        int cnt = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 2) {
                cnt++;
            }
            
            if (cnt == twoCnt / 2) {
                idx = i + 1;
                break;
            }
        }
        cout << idx << endl;
    }
}