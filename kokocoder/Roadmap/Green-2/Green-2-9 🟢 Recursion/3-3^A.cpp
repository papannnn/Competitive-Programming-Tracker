#include <bits/stdc++.h>

using namespace std;
// O(log n)
int main () {
    int n;
    cin >> n;
    vector<int> res;
    while (n) {
        long long val = 0;
        int x = 0;
        while (pow(3, x + 1) <= n) {
            x++;
        }

        n -= pow(3, x);
        res.push_back(x);
    }

    cout << res.size() << endl;
    for (int &num : res) {
        cout << num << " ";
    }
}