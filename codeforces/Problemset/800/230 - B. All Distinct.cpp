#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1692/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> flag;
        int dupe = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (flag.find(num) == flag.end()) {
                flag.insert(num);
            } else {
                dupe++;
            }
        }
        
        cout << n - dupe - (dupe % 2) << endl;
    }
}