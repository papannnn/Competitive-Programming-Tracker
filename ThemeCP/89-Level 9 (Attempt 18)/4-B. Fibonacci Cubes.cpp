#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2111/B
// O(t * (m + n))

int fib(int n) {
    if (n <= 2) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> fibCube;
        for (int i = 1; i <= n; i++) {
            fibCube.push_back(fib(i));
        }

        // for (int &num : fibCube) {
        //     cout << num << " ";
        // }
        // cout << endl;

        for (int i = 0; i < m; i++) {
            int w, l, h;
            cin >> w >> l >> h;

            bool valid = true;
            valid &= h >= (fibCube[fibCube.size() - 1] + fibCube[fibCube.size() - 2]) || 
                (w >= (fibCube[fibCube.size() - 1] + fibCube[fibCube.size() - 2]) && h >= fibCube.back()) || 
                (l >= (fibCube[fibCube.size() - 1] + fibCube[fibCube.size() - 2]) && h >= fibCube.back());
            valid &= w >= fibCube.back() && l >= fibCube.back();
            cout << valid;
        }
        cout << endl;
    }
}