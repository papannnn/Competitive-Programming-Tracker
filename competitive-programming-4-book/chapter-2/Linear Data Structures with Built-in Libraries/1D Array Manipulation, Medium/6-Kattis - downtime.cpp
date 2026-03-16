#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/downtime
int main () {
    long long n, m;
    cin >> n >> m;
    
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }

    vector<long long> cnt(n + 1);
    long long idx = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[idx] + 1000 <= arr[i]) {
            idx = i;
        }
        cnt[idx]++;
    }

    long long res = 0;
    for (long long &num : cnt) {
        long long temp = ceil(static_cast<double>(num) / m);
        res = max(res, temp);
    }
    cout << res << endl;
}