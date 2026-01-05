#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1909/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        long long x = 2;
        while (true) {
            unordered_set<long long> flag;
            for (int i = 0 ; i < arr.size(); i++) {
                flag.insert(arr[i] % x);
            }
            
            if (flag.size() == 2) {
                break;
            }
            x *= 2;
        }
        cout << x << endl;
    }
}
