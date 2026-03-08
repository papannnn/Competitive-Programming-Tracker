#include <bits/stdc++.h>

using namespace std;
// https://www.hackerearth.com/problem/algorithm/pattern/
// O(n)
int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < n - 2; i++) {
        for (int j = (n - 3) - i; j >= 0; j--) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}