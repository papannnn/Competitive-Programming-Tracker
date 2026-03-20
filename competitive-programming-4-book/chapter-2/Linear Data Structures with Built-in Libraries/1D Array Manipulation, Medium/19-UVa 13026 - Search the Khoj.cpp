#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-13026
// O(t * n * s)
int main () {
    int t;
    cin >> t;
    int c = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        string mama;
        cin >> mama;
        cout << "Case " << c++ << ":" << endl;
        for (string &s : arr) {
            if (s.length() != mama.length()) {
                continue;
            }

            int errCnt = 0;
            for (int i = 0 ; i < s.length(); i++) {
                if (s[i] != mama[i]) {
                    errCnt++;
                }
            }

            if (errCnt <= 1) {
                cout << s << endl;
            }
        }
    }
}