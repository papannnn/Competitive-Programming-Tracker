#include <bits/stdc++.h>

using namespace std;
// https://onlinejudge.org/external/4/414.pdf
// O(t)
int main () {
    int n;
    while (true) {
        cin >> n;
        cin.ignore();
        if (n == 0) {
            break;
        }

        int minVal = 1e9;
        vector<int> cntArr;
        for (int i = 0 ; i < n; i++) {
            string s;
            getline(cin, s);
            int cnt = 0;
            int len = s.length();
            for (int j = 0; j < len; j++) {
                if (s[j] == ' ') {
                    cnt++;
                }
            }
            minVal = min(minVal, cnt);
            cntArr.push_back(cnt);
        }

        int res = 0;
        for (int &c : cntArr) {
            res += c - minVal;
        }
        cout << res << endl;
    }
}