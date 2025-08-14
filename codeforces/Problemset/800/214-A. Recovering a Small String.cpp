#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1931/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n -= 3;
        int idx = 2;
        int valArr[] = { 1, 1, 1 };
        while (n) {
            int val = 25;
            val = min(n, val);
            n -= val;
            valArr[idx--] += val;
        }
        
        for (int i = 0 ; i < 3; i++) {
            char c = valArr[i] + 'a' - 1;
            cout << c;
        }
        cout << endl;
    }
}