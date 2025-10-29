#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1234/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int tot = 0;
        for (int &num : arr) {
            cin >> num;
            tot += num;
        }
        
        int res = ceil((double) tot / arr.size());
        cout << res << endl;
    }
}