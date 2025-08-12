#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1703/C
// O(t * n * b)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> wheelArr(n);
        for (int &num : wheelArr) {
            cin >> num;
        }

        for (int i = 0 ; i < wheelArr.size(); i++) {
            int amt;
            cin >> amt;
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++) {
                char c = s[j];
                if (c == 'D') {
                    wheelArr[i]++;
                    if (wheelArr[i] == 10) {
                        wheelArr[i] = 0;
                    }
                } else {
                    wheelArr[i]--;
                    if (wheelArr[i] == -1) {
                        wheelArr[i] = 9;
                    }
                }
            }
            cout << wheelArr[i] << " ";
        }
        cout << endl;
    }
}