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

    long long idx = 0;
    long long cnt = 0;
    long long res = 0;
    for (int i = 0; i < arr.size(); i++) {
        while (arr[idx] + 1000 <= arr[i]) {
            cnt--;
            idx++;
        }
        cnt++;
        res = max(res, cnt);
    }

    long long temp = ceil(static_cast<double>(res) / m);
    cout << temp << endl;
}