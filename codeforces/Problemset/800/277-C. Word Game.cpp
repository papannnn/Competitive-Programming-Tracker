#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1722/C
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<string>> arr;
        unordered_map<string, int> mapping;
        for (int i = 0 ; i < 3; i++) {
            vector<string> strArr;
            for (int i = 0 ; i < n; i++) {
                string s;
                cin >> s;
                strArr.push_back(s);
                mapping[s]++;
            }
            arr.push_back(strArr);
        }

        int point[] = {0,0,0};
        for (int i = 0 ; i < 3; i++) {
            for (string &s : arr[i]) {
                if (mapping[s] == 1) {
                    point[i] += 3;
                } else if (mapping[s] == 2) {
                    point[i] += 1;
                }
            }
        }
        cout << point[0] << " " << point[1] << " " << point[2] << endl;
    }
}