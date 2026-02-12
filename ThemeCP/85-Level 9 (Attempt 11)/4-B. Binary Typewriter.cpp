#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2103/B
// O(t * s)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ptr = 0;
        vector<int> arrLen;
        vector<char> colorArr;
        while (ptr < s.length()) {
            int cnt = 1;
            char curr = s[ptr];
            ptr++;
            while (ptr < s.length() && s[ptr] == curr) {
                ptr++;
                cnt++;
            }
            colorArr.push_back(curr);
            arrLen.push_back(cnt);
        }

        if (colorArr.size() == 2) {
            cout << arrLen[0] + arrLen[1] + 1 << endl;
            continue;
        }

        if (colorArr.size() == 1) {
            cout << arrLen[0] + (colorArr[0] == '1') << endl;
            continue;
        }

        // for (int &cnt : arrLen) {
        //     cout << cnt << " ";
        // }
        // cout <<endl;

        // for (char &c : colorArr) {
        //     cout << c << " ";
        // }
        // cout << endl;

        int maxVal = 0;
        int idx = -1;
        for (int i = colorArr[0] == '0'; i < arrLen.size(); i++) {
            if (maxVal < arrLen[i]) {
                maxVal = arrLen[i];
                idx = i;
            }
        }
        // cout << idx << endl;
        if (idx != arrLen.size() - 1) {
            swap(arrLen[idx], arrLen[idx + 1]);
            swap(colorArr[idx], colorArr[idx + 1]);
        } else {
            swap(arrLen[idx], arrLen[idx - 1]);
            swap(colorArr[idx], colorArr[idx - 1]);
        }
        
        // for (int &cnt : arrLen) {
        //     cout << cnt << " ";
        // }
        // cout <<endl;

        // for (char &c : colorArr) {
        //     cout << c << " ";
        // }
        // cout << endl;
  
        long long res = (colorArr[0] == '1') + arrLen[0];
        char prev = colorArr[0];
        for (int i = 1; i < arrLen.size(); i++) {
            if (colorArr[i] != prev) {
                res++;
            }

            res += arrLen[i];
            prev = colorArr[i];
        }
        cout << res << endl;
    }
}