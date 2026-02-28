#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2175/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> uniq;
        set<int> flag;
        for (int &num : arr) {
            cin >> num;
            if (flag.find(num) == flag.end()) {
                flag.insert(num);
                uniq.push_back(num);
            }
        }
        for (int &num : uniq) {
            cout << num << " ";
        }
        cout << endl;
        long long x = 1e18;
        cout << ((x - n) % flag.size()) << endl;
    }
}