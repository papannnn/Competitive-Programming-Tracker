#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1790/D
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<long long, int> mapping;
        while (n--) {
            long long num;
            cin >> num;
            mapping[num]++;
        }

        int res = 0;
        while (!mapping.empty()) {
            res++;
            auto val = prev(mapping.end());
            long long key = val->first;
            mapping[key]--;
            if (mapping[key] == 0) {
                mapping.erase(key);
            }
            key--;
            while (mapping.find(key) != mapping.end()) {
                mapping[key]--;
                if (mapping[key] == 0) {
                    mapping.erase(key);
                }
                key--;
            }
        }
        cout << res << endl;
    }
}