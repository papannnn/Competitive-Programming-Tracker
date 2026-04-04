#include <bits/stdc++.h>

using namespace std;
// O(n)
struct Village {
    long long pos;
    long long money;
};

int main () {
    long long n, k;
    cin >> n >> k;
    long long res = k;
    vector<Village> arr(n);
    for (int i = 0 ; i < n; i++) {
        Village v;
        cin >> v.pos >> v.money;
        arr.push_back(v);
    }

    sort(arr.begin(), arr.end(), [](const Village &a, const Village &b) {
        return a.pos < b.pos;
    });

    for (auto &v : arr) {
        if (res < v.pos) {
            break;
        }

        res += v.money;
    }

    cout << res << endl;
}