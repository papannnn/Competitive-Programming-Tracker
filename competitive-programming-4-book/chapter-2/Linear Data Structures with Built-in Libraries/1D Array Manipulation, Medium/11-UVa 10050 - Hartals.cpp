#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-10050
// O(t * p)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int p;
        cin >> p;
        vector<bool> flag(n + 1);

        int res = 0;
        while (p--) {
            int jump;
            cin >> jump;
            int curr = jump;
            while (curr <= n) {
                if (!flag[curr] && (curr % 7) != 6 && (curr % 7) != 0) {
                    flag[curr] = true;
                    res++;
                }
                curr += jump;
            }
        }
        cout << res << endl;
    }
}