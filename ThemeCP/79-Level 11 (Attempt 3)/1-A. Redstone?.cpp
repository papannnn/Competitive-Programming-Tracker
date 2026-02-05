#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2133/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> flag;
        for (int &num : arr) {
            cin >> num;
            flag.insert(num);
        }

        cout << (flag.size() != n ? "YES" : "NO") << endl;
    }
}