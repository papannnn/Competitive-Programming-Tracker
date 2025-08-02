#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2014/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int res = 0;
        int coin = 0;
        while (n--) {
            int person;
            cin >> person;
            if (person >= k) {
                coin += person;
            } else if (person == 0 && coin > 0) {
                res++;
                coin--;
            }
        }
        cout << res << endl;
    }
}