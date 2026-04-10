#include <bits/stdc++.h>

using namespace std;
// O(n * n)
int main () {
    int n;
    cin >> n;
    vector<long long> arr(n);
    unordered_map<long long, long long> mapping;
    long long zeroCnt = 0;
    for (long long &num : arr) {
        cin >> num;
        if (num == 0) {
            zeroCnt++;
            continue;
        }

        long long curr = 0;
        long long res = 0;
        while ((curr + 1) * (curr + 1) <= num) {
            curr++;
            if (num % (curr * curr) == 0) {
                res = curr * curr;
            }
        }

        mapping[num / res]++;
    }

    long long res = 0;
    for (auto &m : mapping) {
        res += (m.second - 1) * m.second / 2;
    }
    res += zeroCnt * (n - zeroCnt) + zeroCnt * (zeroCnt - 1) / 2;
    cout << res << endl;
}