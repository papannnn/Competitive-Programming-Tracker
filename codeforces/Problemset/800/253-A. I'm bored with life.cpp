#include <bits/stdc++.h>

using namespace std;
// O(min(a, b))
unsigned long long fact(unsigned long long n) {
    if (n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
int main () {
    unsigned long long a, b;
    cin >> a >> b;
    cout << fact(min(a, b)) << endl;
}