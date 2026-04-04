#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int x, y;
    cin >> x >> y;
    int onlyTurtle = x * 2;
    int onlyCrane = x * 4;
    cout << (y % 2 == 0 && y >= onlyTurtle && y <= onlyCrane ? "Yes" : "No") << endl;
}