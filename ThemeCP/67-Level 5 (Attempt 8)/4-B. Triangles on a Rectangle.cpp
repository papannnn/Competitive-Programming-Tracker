#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1620/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int w, h;
        cin >> w >> h;
        int k;
        cin >> k;
        vector<long long> xPoint0(k);
        for (long long &num : xPoint0) {
            cin >> num;
        }

        cin >> k;
        vector<long long> xPointH(k);
        for (long long &num : xPointH) {
            cin >> num;
        }

        cin >> k;
        vector<long long> yPoint0(k);
        for (long long &num : yPoint0) {
            cin >> num;
        }

        cin >> k;
        vector<long long> yPointW(k);
        for (long long &num : yPointW) {
            cin >> num;
        }

        long long res = 0;
        // cout << xPoint0.back() << endl;
        res = max(res, (xPoint0.back() - xPoint0[0]) * h);
        res = max(res, (xPointH.back() - xPointH[0]) * h);
        res = max(res, (yPoint0.back() - yPoint0[0]) * w);
        res = max(res, (yPointW.back() - yPointW[0]) * w);
        cout << res << endl;
    }
}