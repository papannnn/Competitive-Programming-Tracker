#include <bits/stdc++.h>

using namespace std;
// O(n + m)
int main () {
    string n;
    cin >> n;
    string m;
    cin >> m;

    cout << (n.contains(m) ? "Yes" : "No") << endl;
}