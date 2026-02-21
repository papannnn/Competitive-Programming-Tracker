#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1418/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long howManyCoalNeeded = y * k;
        long long howManyGrindForCoal = ceil(static_cast<double>(howManyCoalNeeded) / (x - 1));
        long long myStick = howManyGrindForCoal * (x - 1) + 1;
        myStick -= howManyCoalNeeded;
        long long howManyGrindForStick = ceil(static_cast<double>(k - myStick) / (x - 1));
        cout << howManyGrindForCoal + howManyGrindForStick + k << endl;
    }
}