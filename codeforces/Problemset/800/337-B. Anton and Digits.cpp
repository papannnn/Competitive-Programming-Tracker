#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/734/B
// O(1)
int main () {
    int two, three, five, six;
    cin >> two >> three >> five >> six;

    int res = 0;
    res += 256 * min(two, min(five, six));
    two -= min(two, min(five, six));
    five -= min(two, min(five, six));
    six -= min(two, min(five, six));
    res += 32 * min(two, three);
    cout << res << endl;
}