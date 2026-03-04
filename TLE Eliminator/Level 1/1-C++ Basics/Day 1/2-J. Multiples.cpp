#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
// O(1)
int main () {
    int a, b;
    cin >> a >> b;
    int maxVal = max(a, b);
    int minVal = min(b, a);
    cout << (maxVal % minVal == 0 ? "Multiples" : "No Multiples") << endl;
}