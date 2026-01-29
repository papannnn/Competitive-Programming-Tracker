#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1421/problem/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        int oneStart = 0;
        int oneEnd = 0;
        int zeroStart = 0;
        int zeroEnd = 0;

        oneStart += arr[0][1] == '1';
        oneStart += arr[1][0] == '1';

        zeroStart += arr[0][1] == '0';
        zeroStart += arr[1][0] == '0';

        oneEnd += arr[arr.size() - 2][arr.size() - 1] == '1';
        oneEnd += arr[arr.size() - 1][arr.size() - 2] == '1';

        zeroEnd += arr[arr.size() - 2][arr.size() - 1] == '0';
        zeroEnd += arr[arr.size() - 1][arr.size() - 2] == '0';
        
        if ((oneStart == 2 && zeroEnd == 2) || (zeroStart == 2 && oneEnd == 2)) {
            cout << 0 << endl;
            continue;
        }

        if ((oneStart == 2 && oneEnd == 2) || (zeroStart == 2 && zeroEnd == 2)) {
            cout << 2 << endl;
            cout << "1 2" << endl;
            cout << "2 1" << endl;
            continue;
        }

        if (oneStart == 2) {
            cout << 1 << endl;
            if (arr[arr.size() - 2][arr.size() - 1] == '1') {
                cout << n - 1 << " " << n << endl;
            } else {
                cout << n << " " << n - 1 << endl;
            }
            continue;
        }

        if (zeroStart == 2) {
            cout << 1 << endl;
            if (arr[arr.size() - 2][arr.size() - 1] == '0') {
                cout << n - 1 << " " << n << endl;
            } else {
                cout << n << " " << n - 1 << endl;
            }
            continue;
        }

        if (oneEnd == 2) {
            cout << 1 << endl;
            if (arr[0][1] == '1') {
                cout << "1 2" << endl;
            } else {
                cout << "2 1" << endl;
            }
            continue;
        }

        if (zeroEnd == 2) {
            cout << 1 << endl;
            if (arr[0][1] == '0') {
                cout << "1 2" << endl;
            } else {
                cout << "2 1" << endl;
            }
            continue;
        }

        cout << 2 << endl;
        if (arr[0][1] == '1') {
            cout << "1 2" << endl;
        } else {
            cout << "2 1" << endl;
        }

        if (arr[arr.size() - 2][arr.size() - 1] == '0') {
            cout << n - 1 << " " << n << endl;
        } else {
            cout << n << " " << n - 1 << endl;
        }
    }
}