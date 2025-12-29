#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int res = 0;
        int x = 1;
        bool isA = true;
        int tempA = a;
        int tempB = b;
        while (true) {
            if (isA) {
                if (tempA < x) break;
                tempA -= x;
                x *= 2;
            } else {
                if (tempB < x) break;
                tempB -= x;
                x *= 2;
            }
            isA = !isA;
            res++;
        }

        int tempRes = 0;
        isA = false;
        tempA = a;
        tempB = b;
        x = 1;
        while (true) {
            if (isA) {
                if (tempA < x) break;
                tempA -= x;
                x *= 2;
            } else {
                if (tempB < x) break;
                tempB -= x;
                x *= 2;
            }
            isA = !isA;
            tempRes++;
        }
        // cout << res << endl;
        // cout << tempRes << endl;
        cout << max(res, tempRes) << endl;
    }
}