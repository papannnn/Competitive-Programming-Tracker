#include <bits/stdc++.h>

using namespace std;
// O(t * n log n)
// https://vjudge.net/problem/UVA-12709
struct Ant {
    int l;
    int w;
    int h;
};

int main () {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<Ant> arr;
        for (int i = 0; i < n ; i++) {
            Ant a;
            cin >> a.l >> a.w >> a.h;
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end(), [](Ant &a, Ant &b) {
            if (a.h != b.h) {
                return a.h < b.h;
            }

            int val1 = a.h * a.l * a.w;
            int val2 = b.h * b.l * b.w;
            return val1 < val2;
        });
        int res = arr.back().h * arr.back().l * arr.back().w;
        cout << res << endl;
    }
}