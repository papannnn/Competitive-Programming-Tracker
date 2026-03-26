#include <bits/stdc++.h>

using namespace std;
// O(t * s log s)
// https://vjudge.net/problem/UVA-1610
int main () {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }
        sort(arr.begin(), arr.end());
        int idx = arr.size() / 2 - 1;
        string res = "";
        int lastIdx = 0;
        // bool 
        for (int i = 0 ; i < min(arr[idx].length(), arr[idx + 1].length()); i++) {
            if (arr[idx][i] == arr[idx + 1][i]) {
                res += arr[idx][i];
                lastIdx++;
                continue;
            }

            if (arr[idx][i] + 1 == arr[idx + 1][i] && (i == arr[idx + 1].size() - 1 || i != arr[idx].size() - 1)) {
                res += arr[idx][i];
                lastIdx++;
                break;
            }

            res += arr[idx][i] + 1;
            lastIdx++;
            break;
        }

        while (lastIdx < arr[idx].size() && res < arr[idx]) {
            res += arr[idx][lastIdx];
            lastIdx++;
        }

        cout << res << endl;
    }
}