#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1914/D
// O(t * n log n)

struct Data {
    long long val;
    int idx;
};

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Data> arr1(n);
        vector<Data> arr2(n);
        vector<Data> arr3(n);
        for (int i = 0 ; i < arr1.size(); i++) {
            Data d;
            cin >> d.val;
            d.idx = i;
            arr1[i] = d;
        }

        for (int i = 0 ; i < arr2.size(); i++) {
            Data d;
            cin >> d.val;
            d.idx = i;
            arr2[i] = d;
        }

        for (int i = 0 ; i < arr3.size(); i++) {
            Data d;
            cin >> d.val;
            d.idx = i;
            arr3[i] = d;
        }

        sort(arr1.begin(), arr1.end(), [](Data &a, Data &b) {
            return a.val > b.val;
        });

        sort(arr2.begin(), arr2.end(), [](Data &a, Data &b) {
            return a.val > b.val;
        });

        sort(arr3.begin(), arr3.end(), [](Data &a, Data &b) {
            return a.val > b.val;
        });

        long long res = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (arr1[i].idx != arr2[j].idx && arr1[i].idx != arr3[k].idx && arr2[j].idx != arr3[k].idx) {
                        res = max(res, arr1[i].val + arr2[j].val + arr3[k].val);
                    }
                }
            }
        }
        cout << res << endl;
    }
}