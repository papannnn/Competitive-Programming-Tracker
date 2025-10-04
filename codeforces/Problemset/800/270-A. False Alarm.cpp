#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2117/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        bool open = false;
        bool valid = true;
        for (int i = 0 ; i < arr.size(); i++) {
            if (arr[i] == 1) {
                open = true;
                valid = m > 0;
            }
            
            if (open) {
                m--;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}