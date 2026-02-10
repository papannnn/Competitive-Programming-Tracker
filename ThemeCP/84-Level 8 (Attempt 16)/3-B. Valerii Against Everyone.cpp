#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1438/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long& num : arr) {
            cin >> num;
        }

        set<long long> flag;
        bool valid = false;
        for (int i = 0 ; i < arr.size(); i++) {
            if (flag.find(arr[i]) == flag.end()) {
                flag.insert(arr[i]);
            } else {
                valid = true;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}