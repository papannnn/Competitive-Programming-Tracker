#include <bits/stdc++.h>

using namespace std;
// O(n!)
void f(int n) {
    if (n == 1) {
        cout << 1;
        return;
    }
    f(n - 1);
    cout << " " << n << " ";
    f(n - 1);
}

int main () {
    int n;
    cin >> n;
    f(n);
}