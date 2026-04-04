#include <bits/stdc++.h>

using namespace std;
// O(t * n ^ 2)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        bool flag = true;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < n; k++) {
                    if (k % 2 == 0) {
                        if (flag) {
                            cout << "##";
                        } else {
                            cout << "..";
                        }
                    } else {
                        if (flag) {
                            cout << "..";
                        } else {
                            cout << "##";
                        }
                    }
                }
                cout << endl;
            }
            flag = !flag;
        }
    }
}