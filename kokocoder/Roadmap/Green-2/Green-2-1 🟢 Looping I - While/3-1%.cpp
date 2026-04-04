#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    long long n;
    cin >> n;
    long long money = 100;
    int res = 1;
    while (money + money / 100 < n) {
        money += money / 100;
        res++;
    }
    cout << res << endl;
}