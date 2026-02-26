#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1904/B
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
        vector<Data> arr;
        for (int i = 0 ; i < n; i++) {
            long long val;
            cin >> val;
            Data d;
            d.val = val;
            d.idx = i;
            arr.push_back(d);
        }

        sort(arr.begin(), arr.end(), [] (Data &a, Data &b) {
            return a.val < b.val;
        });

        vector<long long> prefixSum;
        long long sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i].val;
            prefixSum.push_back(sum);
        }

        vector<int> result(n);
        result[arr[arr.size() - 1].idx] = result.size() - 1;
        for (int i = arr.size() - 2; i >= 0; i--) {
            if (prefixSum[i] >= arr[i + 1].val) {
                result[arr[i].idx] = result[arr[i + 1].idx];
            } else {
                result[arr[i].idx] = i;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}