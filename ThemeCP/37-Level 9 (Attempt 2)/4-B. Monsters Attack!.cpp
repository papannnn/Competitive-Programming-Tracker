#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1923/B
// O(t * n)
struct Monster {
    int health;
    int pos;
};

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> healthArr(n);
        for (int &num : healthArr) {
            cin >> num;
        }

        vector<int> posArr(n);
        for (int &num : posArr) {
            cin >> num;
        }

        vector<int> monster(n + 1);
        for (int i = 0 ; i < n; i++) {
            monster[abs(posArr[i])] += healthArr[i];
        }

        bool valid = true;
        long long ammo = 0;
        for (int i = 1; i <= n; i++) {
            ammo += k;
            ammo -= monster[i];
            valid &= ammo >= 0;
        }

        cout << (valid ? "YES" : "NO") << endl;
    }
}