#include <bits/stdc++.h>

using namespace std;
// O(s)
int main () {
    string s;
    getline(cin, s);
    while (s != "Game Over") {
        int doubleCount = 0;
        int res = 0;
        int prevNum = 0;
        int cnt = 0;
        for (int i = 0 ; i < s.length(); i += 2) {

            if (s[i] == 'X') {
                cnt += 2;
                res += 10;
                if (doubleCount && cnt < 20) {
                    doubleCount--;
                    res+= 10;
                }
                // cout << res << " ";
                doubleCount += 2;
                continue;
            }

            cnt++;

            if (s[i] == '/') {
                res += 10 - prevNum;
                if (doubleCount && cnt < 20) {
                    res += 10 - prevNum;
                    doubleCount--;
                }
                // cout << res << " ";
                doubleCount += 1;
                continue;
            }

            res += s[i] - '0';
            prevNum = s[i] - '0';
            if (doubleCount && cnt < 20) {
                res += s[i] - '0';
                doubleCount--;
            }
            // cout << res << " ";
        }
        // cout << endl;
        cout << res << endl;
        getline(cin, s);
    }
}