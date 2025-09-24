#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1834/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int minus = 0;
        int one = 0;

        int num;
        while (n--) {
            cin >> num;
            if (num == 1) {
                one++;
            } else {
                minus++;
            }
        }

        int total = one + minus;
        int res = 0;
        if (one < minus) {
            int mustHave = ceil((double) total / 2);
            res += abs(one - mustHave);
            minus -= abs(one - mustHave);
            one += abs(one - mustHave);
        }

        if (minus % 2) {
            res++;
        }
        cout << res << endl;
    }
}