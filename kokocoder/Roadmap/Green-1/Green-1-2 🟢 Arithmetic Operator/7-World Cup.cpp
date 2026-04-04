#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int year;
    cin >> year;
    if (year % 4 == 2) {
        cout << year << endl;
    } else if (year % 4 == 3) {
        cout << year + 3 << endl;
    } else if (year % 4 == 1) {
        cout << year + 1 << endl;
    } else {
        cout << year + 2 << endl;
    }
}