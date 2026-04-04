#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int a, b, d;
    cin >> a >> b >> d;
    while (a <= b) {
        cout << a << " ";
        a += d;
    }
    cout << endl;
}