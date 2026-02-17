#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2171/C1
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int &num : arr1) {
            cin >> num;
        }

        for (int &num : arr2) {
            cin >> num;
        }

        int ajisai = 0;
        int mai = 0;
        for (int i = 0 ; i < n; i++) {
            if (arr1[i] == 1) {
                ajisai++;
            }

            if (arr2[i] == 1) {
                mai++;
            }
        }

        for (int i = 0 ; i < arr1.size(); i++) {
            if (arr1[i] == arr2[i]) {
                continue;
            }

            // Ajisai
            if (i % 2 == 0) {
                if ((ajisai % 2) == 0) {
                    if (arr1[i] == 0) {
                        ajisai++;
                        mai--;
                    } else {
                        ajisai--;
                        mai++;
                    }
                }
            } else {
                if ((mai % 2) == 0) {
                    if (arr1[i] == 0) {
                        mai++;
                        ajisai--;
                    } else {
                        mai--;
                        ajisai++;
                    }
                }
            }
        }

        mai = abs(mai);
        ajisai = abs(ajisai);
        if ((mai % 2) > (ajisai % 2)) {
            cout << "Mai" << endl;
        } else if ((mai % 2) < (ajisai % 2)) {
            cout << "Ajisai" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
}