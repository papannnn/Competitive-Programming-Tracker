#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1692/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        getchar();
        vector<string> arr;
        for (int i = 0 ; i < 8; i++) {
            string s;
            cin >> s;
            arr.push_back(s);
        }

        for (int i = 1 ; i < arr.size() - 1; i++) {
            for (int j = 1; j < arr[i].length() - 1; j++) {
                if (arr[i - 1][j - 1] == '#' && arr[i - 1][j + 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#') {
                    cout << i + 1 << " " << j + 1 << endl;
                }
            }
        }
        
    }
}