#include <bits/stdc++.h>

using namespace std;
// O(s)
int main () {
    string sFirst1, sLast1;
    string sFirst2, sLast2;
    cin >> sFirst1 >> sLast1;
    cin >> sFirst2 >> sLast2;

    cout << (sLast1.compare(sLast2) == 0 ? "ARE Brothers" : "NOT") << endl;
}