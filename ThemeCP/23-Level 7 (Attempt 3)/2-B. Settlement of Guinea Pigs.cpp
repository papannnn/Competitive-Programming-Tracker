#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1802/B
// O(t * n)

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int emptyCage = 0;
        int amountCage = 0;
        int aloneCage = 0;
        while (n--) {
            int option;
            cin >> option;

            if (option == 1) {
                if (emptyCage == 0) {
                    amountCage++;
                    aloneCage++;
                    continue;
                } else {
                    emptyCage--;
                    aloneCage++;
                }

                continue;
            }

            if (option == 2) {
                if (aloneCage > 2) {
                    emptyCage += (aloneCage - 1) / 2;
                    aloneCage = 1 + (aloneCage % 2 == 0);
                }
                continue;
            }
        }
        cout << amountCage << endl;
    }
}