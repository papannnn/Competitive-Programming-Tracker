#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << "O-|-OOOO" << endl;
        return 0;
    }

    while (n != 0) {
        int val = n % 10;
        if (val >= 5) {
            val -= 5;
            cout << "-O";
        } else {
            cout << "O-";
        }
        cout << "|";
        int bead = 4;
        while (val--) {
            cout << "O";
            bead--;
        }
        cout << "-";
        while (bead--) {
            cout << "O";
        }
        n /= 10;
        cout << endl;
    }
}