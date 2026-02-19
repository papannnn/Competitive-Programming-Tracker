#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1473/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;

        string res = s2;;
        string temp = s1;

        bool found = false;
        for (int i = 0; i < 100 && !found; i++) {
            while (temp.size() < res.size()) {
                temp += s1;
            }

            if (res.compare(temp) == 0) {
                found = true;
                break;
            }
            res += s2;
        }
        
        if (found) {
            cout << res << endl;
        } else {
            cout << -1 << endl;
        }
    }
}