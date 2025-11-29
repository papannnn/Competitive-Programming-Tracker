#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2153/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> flag;
        while (n--) {
            int num;
            cin >> num;
            flag.insert(num);
        }
        cout << flag.size() << endl;
    }
}