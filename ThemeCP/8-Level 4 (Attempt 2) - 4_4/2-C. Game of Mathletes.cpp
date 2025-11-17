#include <bits/stdc++.h>
 
using namespace std;
// https://codeforces.com/problemset/problem/2060/C
// O(t * n)
int main () {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        unordered_map<long long, long long> mapping;
        for (long long &num : arr) {
            cin >> num;
            mapping[num]++;
        }
 
        unordered_set<long long> flag;
        long long res = 0;
        for (auto m : mapping) {
            if (flag.find(m.first) != flag.end()) {
                continue;
            }
 
            long long val = k - m.first;
            if (val <= 0) {
                flag.insert(m.first);
                continue;
            }
            
            if (mapping.find(val) == mapping.end()) {
                flag.insert(m.first);
                continue;
            }
 
            if (m.first == val) {
                res += m.second / 2;
                flag.insert(m.first);
                continue;
            }
 
            res += min(m.second, mapping[val]);
            flag.insert(m.first);
            flag.insert(val);
        }
        cout << res << endl;
    }
}