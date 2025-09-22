#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2132/A
// O(t * m)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        deque<char> arr;
        for (int i = 0; i < a.length(); i++) {
            arr.push_back(a[i]);
        }
        int m;
        cin >> m;
        string b;
        cin >> b;

        string c;
        cin >> c;
        for (int i = 0 ; i < c.length(); i++) {
            if (c[i] == 'D') {
                arr.push_back(b[i]);
            } else {
                arr.push_front(b[i]);
            }
        }

        for (int i = 0 ; i < arr.size(); i++) {
            cout << arr[i];
        }
        cout << endl;
    }
}
