#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1802/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int minVal = 0;
        int maxVal = 0;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            if (num > 0) {
                maxVal++;
            } else {
                minVal++;
            }
        }

        int val = 0;
        for (int i = 0 ; i < maxVal; i++) {
            val++;
            cout << val << " ";
        }

        for (int i = 0 ; i < minVal; i++) {
            if (val > 0) {
                val--;
            }
            cout << val << " ";
        }
        cout << endl;

        for (int i = 0; i < minVal; i++) {
            cout << "1 0 ";
        }

        val = 0;
        for (int i = 0; i < maxVal - minVal; i++) {
            val++;
            cout << val << " ";
        }
        cout << endl;
    }
}