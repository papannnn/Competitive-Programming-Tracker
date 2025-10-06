#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2037/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> mapping;
        
        while (n--) {
            int num;
            cin >> num;
            mapping[num]++;
        }

        int res = 0;
        for (auto keyset : mapping) {
            res += keyset.second / 2;
        }
        cout << res << endl;
    }
}