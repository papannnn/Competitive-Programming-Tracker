#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    long long n;
    cin >> n;
    vector<char> res;
    while (n) {
        if (n % 2 == 0) {
            res.push_back('B');
            n /= 2;
        } else {
            n--;
            res.push_back('A');
        }
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}