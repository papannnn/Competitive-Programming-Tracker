#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    double sum = 0;
    while (n--) {
        double val;
        cin >> val;
        sum += 1 / val;
    }
    cout << 1 / sum << endl;
}