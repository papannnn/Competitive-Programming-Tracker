#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1950/B
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool isEven = true;
        int counter = 0;
        for (int i = 0 ; i < n * 2; i++) {
            for (int j = 0 ; j < n; j++) {
                if (isEven) {
                    if (j % 2 == 0) {
                        cout << "##";
                    } else {
                        cout << "..";
                    }
                } else {
                    if (j % 2 == 0) {
                        cout << "..";
                    } else {
                        cout << "##";
                    }
                }
            }
            cout << endl;
            counter++;
            if (counter == 2) {
                isEven = !isEven;
                counter = 0;
            }
        }
    }
}