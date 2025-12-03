#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1772/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int diff = k - n;
        int counter = 1;
        int cnt = 0;
        while (diff >= counter) {
            diff -= counter;
            counter++;
            cnt++;
        }

        int x = 1;
        counter = 2;
        for (int i = 0 ; i < min(cnt, n); i++) {
            cout << x << " ";
            x += counter;
            counter++;
        }
        
        for (int i = 0 ; i < n - cnt; i++) {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}