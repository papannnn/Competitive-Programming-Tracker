#include <bits/stdc++.h>

using namespace std;
// O(t * n * k)
// https://vjudge.net/problem/UVA-612
struct Data {
    string val;
    int inversionCnt;
};

int main () {
    int t;
    cin >> t;
    bool first = true;
    while (t--) {
        int k, n;
        cin >> k >> n;
        vector<Data> arr;
        for (int i = 0 ; i < n; i++) {
            int inversion = 0;
            string s;
            cin >> s;
            for (int j = 0; j < k; j++) {
                for (int l = j + 1; l < k; l++) {
                    if (s[j] > s[l]) {
                        inversion++;
                    }
                }
            }
            Data temp = {s, inversion};
            arr.push_back(temp);
        }

        stable_sort(arr.begin(), arr.end(), [](const Data &a, const Data &b) {
            return a.inversionCnt < b.inversionCnt;
        });

        if (!first) {
            cout << endl;
        }
        first = false;
        for (Data &d : arr) {
            cout << d.val << endl;
        }
    }
}