#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, k;;
    cin >> n >> k;
    vector<long long> arr;
    long long pos = 0;
    while (n--) {
        long long num;
        cin >> num;
        pos += num;
        arr.push_back(pos);
    }

    while (k--) {
        long long num;
        cin >> num;
        
        auto pos = lower_bound(arr.begin(), arr.end(), num);
        int res;
        if (pos == arr.end()) {
            pos--;
        } else if (num < *pos) {
            pos--;
        }
        cout << (pos - arr.begin() + 1) << endl;
    }
}