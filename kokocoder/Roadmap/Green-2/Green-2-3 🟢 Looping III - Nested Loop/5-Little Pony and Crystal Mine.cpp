#include <bits/stdc++.h>

using namespace std;
// O(n ^ 2)
int main () {
    int n;
    cin >> n;
    for (int i = 1 ; i <= n / 2; i++) {
        for (int j = 0; j <= n / 2 - i; j++) {
            cout << "*";
        }

        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "D";
        }

        for (int j = 0; j <= n / 2 - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) 
        cout << "D";
    cout << endl;

    for (int i = n / 2 ; i > 0; i--) {
        for (int j = 0; j <= n / 2 - i; j++) {
            cout << "*";
        }

        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "D";
        }

        for (int j = 0; j <= n / 2 - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}