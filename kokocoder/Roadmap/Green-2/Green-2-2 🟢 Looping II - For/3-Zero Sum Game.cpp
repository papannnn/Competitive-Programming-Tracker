#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    n--;
    int curr = 0;
    while (n--) {
        int val;
        cin >> val;
        curr -= val;
    }
    cout << curr << endl;
}