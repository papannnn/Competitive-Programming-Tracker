#include <bits/stdc++.h>

using namespace std;
// O(n * max(s))
int main () {
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(100, '*'));
    int maxLen = 0;
    for (vector<char> &a : arr) {
        string s;
        cin >> s;
        int ln = s.length();
        maxLen = max(maxLen, ln);
        for (int i = 0; i < s.length(); i++) {
            a[i] = s[i];
        }
    }

    for (int i = 0; i < maxLen; i++) {
        int stop = n - 1;
        for (int j = n - 1; j >= 0; j--) {
            if (arr[j][i] != '*') {
                stop = j;
            }
        }

        for (int j = n - 1; j >= stop; j--) {
            cout << arr[j][i];
        }
        cout << endl;
    }
}