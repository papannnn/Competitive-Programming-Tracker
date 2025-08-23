#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1325/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_set<int> mapping;
        while (n--) {
            int num;
            cin >> num;
            mapping.insert(num);
        }

        cout << mapping.size() << endl;
    }
}