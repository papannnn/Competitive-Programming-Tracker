#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1896/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }
        
        cout << (arr[0] == 1 ? "YES" : "NO") << endl;
    }
}