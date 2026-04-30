#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    long long pos = 0;
    vector<long long> arr;
    while (n--) {
        long long num;
        cin >> num;
        pos += num;
        arr.push_back(pos);
    }

    int q;
    cin >> q;
    while (q--) {
        long long val;
        cin >> val;
        cout << lower_bound(arr.begin(), arr.end(), val) - arr.begin() + 1 << endl;;
    }
}