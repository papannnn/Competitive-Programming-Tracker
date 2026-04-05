#include <bits/stdc++.h>

using namespace std;
// O((n * a) * (n * b))
int main () {
    int n, a, b;
    cin >> n >> a >> b;

    bool flag = true;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < a ; j++) {
            bool flag1 = !flag;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < b; l++) {
                    if (flag1) {
                        cout << "#";

                    } else {
                        cout << ".";
                    }
                }
                flag1 = !flag1;
            }
            cout << endl;
        }
        flag = !flag;
    }
}