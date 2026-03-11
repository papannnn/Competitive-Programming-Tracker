#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    int cnt = 0;
    int loop = 1;
    bool flag = true;
    while (n--) {
        if (flag) {
            int number = cnt + loop;
            for (int i = 0; i < loop; i++) {
                cout << number-- << " ";
                cnt++;
            }
        } else {
            int number = cnt + 1;
            for (int i = 0; i < loop; i++) {
                cout << number++ << " ";
                cnt++;
            }
        }
        flag = !flag;
        loop++;
        cout << endl;
    }
}