#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2092/problem/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> arrA(n);
        vector<char> arrB(n);
        int tot = 0;
        for (char &num : arrA) {
            cin >> num;
            tot += num - '0';
        }

        for (char &num : arrB) {
            cin >> num;
            tot += num - '0';
        }

        if (tot > arrB.size()) {
            cout << "NO" << endl;
            continue;
        }

        int evenCnt = 0;
        int oddCnt = 0;
        for (int i = 0 ; i < arrB.size(); i++) {
            if (arrB[i] == '0') {
                if (i % 2) {
                    oddCnt++;
                } else {
                    evenCnt++;
                }
            }
        }

        bool valid = true;
        for (int i = 0 ; i < arrA.size(); i++) {
            if (arrA[i] == '1') {
                if (i % 2) {
                    valid &= evenCnt > 0;
                    evenCnt--;
                } else {
                    valid &= oddCnt > 0;
                    oddCnt--;
                }
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}