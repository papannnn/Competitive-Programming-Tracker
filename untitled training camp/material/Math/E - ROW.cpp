#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/contest/631793#problem/E
// O(n + m)
int main () {
    int n, m;
    cin >> n >> m;
    vector<long long> arr1(n);
    vector<long long> arr2(m);
    for (long long& num : arr1) {
        cin >> num;
    }

    for (long long& num : arr2) {
        cin >> num;
    }

    long long precompute = 0;
    for (int i = 1; i < arr1.size(); i++) {
        precompute = gcd(precompute, arr1[i] - arr1[0]);
    }

    for (int i = 0; i < arr2.size(); i++) {
        cout << gcd(arr2[i] + arr1[0], precompute) << " ";
    }
    cout << endl;
}