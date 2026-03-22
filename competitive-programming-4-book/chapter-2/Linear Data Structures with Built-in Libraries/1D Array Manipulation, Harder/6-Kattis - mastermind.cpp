#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/mastermind
// O(n * m)
int main () {
    int n;
    cin >> n;
    string real;
    string guess;
    cin >> real;
    cin >> guess;

    vector<bool> flag1(n);
    vector<bool> flag2(n);
    int r = 0;
    for (int i = 0 ; i < n; i++) {
        if (real[i] == guess[i]) {
            r++;
            flag1[i] = true;
            flag2[i] = true;
        }
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        if (flag1[i]) {
            continue;
        }

        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }

            if (flag2[j]) {
                continue;
            }

            if (real[i] == guess[j]) {
                s++;
                flag2[j] = true;
                break;
            }
        }
    }
    cout << r << " " << s;
}