#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1385/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> flagArr(n + 1);
        n *= 2;
        while (n--) {
            int num;
            cin >> num;
            if (!flagArr[num]) {
                cout << num << " ";
                flagArr[num]++;
            }
        }
        cout << endl;
    }
}