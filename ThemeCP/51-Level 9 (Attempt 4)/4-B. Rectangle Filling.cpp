#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1966/B
// O(t * n * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> arr;
        for (int i = 0; i < n; i++) {
            vector<char> temp(m);
            for (char &c : temp) {
                cin >> c;
            }
            arr.push_back(temp);
        }

        bool valid = true;

        bool validWTop = false;
        bool validWBot = false;
        bool validWLeft = false;
        bool validWRight = false;


        bool validBTop = false;
        bool validBBot = false;
        bool validBLeft = false;
        bool validBRight = false;
        for (int i = 0; i < m; i++) {
            validWTop |= arr[0][i] == 'W';
            validWBot |= arr[arr.size() - 1][i] == 'W';
            
            validBTop |= arr[0][i] == 'B';
            validBBot |= arr[arr.size() - 1][i] == 'B';
        }

        for (int i = 0 ; i < n; i++) {
            validWLeft |= arr[i][0] == 'W';
            validWRight |= arr[i][m - 1] == 'W';
            
            validBLeft |= arr[i][0] == 'B';
            validBRight |= arr[i][m - 1] == 'B';
        }
        cout << ((validWBot && validWLeft && validWRight && validWTop) || (validBBot && validBLeft && validBRight && validBTop) ? "YES" : "NO") << endl;
    }
}