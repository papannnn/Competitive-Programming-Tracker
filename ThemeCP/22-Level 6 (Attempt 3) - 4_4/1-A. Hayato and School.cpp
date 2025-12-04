#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1780/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> idxOdd;
        vector<int> idxEven;
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2) {
                idxOdd.push_back(i + 1);
            } else {
                idxEven.push_back(i + 1);
            }
        }

        if (idxOdd.size() >= 1 && idxOdd.size() < 3 && idxEven.size() >= 2) {
            cout << "YES" << endl;
            cout << idxOdd[0] << " " << idxEven[0] << " " << idxEven[1] << endl;
        } else if(idxOdd.size() >= 3) {
            cout << "YES" << endl;
            cout << idxOdd[0] << " " << idxOdd[1] << " " << idxOdd[2] << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}