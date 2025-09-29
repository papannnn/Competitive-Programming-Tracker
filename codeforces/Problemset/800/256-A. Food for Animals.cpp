#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1675/A
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long dogFood, catFood, universalFood, dog, cat;
        cin >> dogFood >> catFood >> universalFood >> dog >> cat;
        dog = max(0LL, dog - dogFood);
        cat = max(0LL, cat - catFood);
        
        int res = max(0LL, (dog + cat) - universalFood);
        cout << (res ? "NO" : "YES") << endl;
    }
}