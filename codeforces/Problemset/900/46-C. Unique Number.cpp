#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1462/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> flag(10);
        int counter = 9;
        string res = "";
        while (counter && n) {
            for (int i = 9; i >= 1; i--) {
                if (!flag[i] && n >= i) {
                    char c = '0' + i;
                    flag[i] = 1;
                    n -= i;
                    res = c + res;
                    counter--;
                    break;
                }
            }
        }
        cout << (n ? "-1" : res) << endl;
    }
}