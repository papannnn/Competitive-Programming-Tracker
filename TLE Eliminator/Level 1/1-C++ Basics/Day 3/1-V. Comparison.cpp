#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
// O(1)
int main () {
    int a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '>') {
        cout << (a > b ? "Right" : "Wrong") << endl;
    } else if (c == '<') {
        cout << (a < b ? "Right" : "Wrong") << endl;
    } else {
        cout << (a == b ? "Right" : "Wrong") << endl;
    }
}