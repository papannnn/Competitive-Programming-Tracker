#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-10978
// O(t * n)
int main () {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<pair<string, string>> arr(n);
        for (int i = 0; i < n; i++) {
            string card, word;
            cin >> card >> word;
            arr[i] = make_pair(card, word);
        }

        vector<string> flag(n, "");
        int idx = -1;
        for (int i = 0 ; i < n; i++) {
            pair<string, string> &temp = arr[i];
            for (int j = 0; j < temp.second.size(); j++) {
                idx++;
                if (idx == n) {
                    idx = 0;
                }
                while (flag[idx] != "") {
                    idx++;
                    if (idx == n) {
                        idx = 0;
                    }
                }
            }
            flag[idx] = temp.first;
        }

        bool first = true;
        for (string &s : flag) {
            if (!first) {
                cout << " ";
            }
            cout << s;
            first = false;
        }
        cout << endl;
    }
}