#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/540/A
// O(t * s)
int main () {
    int _;
    cin >> _;
    string from;
    cin >> from;
    string target;
    cin >> target;
    int res = 0;
    for (int i = 0 ; i < from.length(); i++) {
        int currFrom = from[i] - '0';
        int currTarget = target[i] - '0';
        res += min(abs(currFrom - currTarget), min(10 - currFrom + currTarget, currFrom + 10 - currTarget));
    }
    cout << res << endl;
}
