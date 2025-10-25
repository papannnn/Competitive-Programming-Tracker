#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1626/A
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr(26);
        string s;
        cin >> s;
        for (int i = 0 ; i < s.length(); i++) {
            arr[s[i] - 'a']++;
        }

        for (int i = 0 ; i < arr.size(); i++) {
            char c = i + 'a';
            while (arr[i]) {
                cout << c;
                arr[i]--;
            }
        }
        cout << endl;
    }
}