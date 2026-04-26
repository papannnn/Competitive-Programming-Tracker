#include <bits/stdc++.h>

using namespace std;
int main () {
    long long bebek, kucing;
    cin >> bebek >> kucing;

    for (int i = 60; i >= 0; i--) {
        long long val = pow(2, i);
        if (bebek + val <= kucing) {
            cout << val << endl;
            bebek += val;
        }
    }
}