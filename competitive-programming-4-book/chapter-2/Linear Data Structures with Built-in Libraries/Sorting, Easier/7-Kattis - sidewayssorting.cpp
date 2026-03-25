#include <bits/stdc++.h>

using namespace std;
// O(t * n log n)
// https://open.kattis.com/problems/sidewayssorting
struct Data {
    string s;
    string caseS;
};

int main () {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }

        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        vector<Data> arr1;
        for (int i = 0; i < m; i++) {
            string temp = "";
            string tempCase = "";
            for (int j = 0; j < n; j++) {
                temp += arr[j][i];
                tempCase += tolower(arr[j][i]);
            }
            arr1.push_back({temp, tempCase});
        }

        stable_sort(arr1.begin(), arr1.end(), [](const Data &a, const Data &b) {
            return a.caseS < b.caseS;
        });
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << arr1[j].s[i];
            }
            cout << endl;
        }
        cout << endl;
    }
}