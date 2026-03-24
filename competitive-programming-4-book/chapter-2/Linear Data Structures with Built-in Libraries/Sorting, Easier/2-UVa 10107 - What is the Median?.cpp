#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-10107
// O(n * n log n)
int main () {
    vector<long long> arr;
    long long n;
    while (cin >> n) {
        arr.push_back(n);

        sort(arr.begin(), arr.end());
        if (arr.size() % 2) {
            cout << arr[arr.size() / 2] << endl;
        } else {
            long long val = (arr[arr.size() / 2 - 1] + arr[arr.size() / 2]) / 2;
            cout << val << endl;
        }
    }
}