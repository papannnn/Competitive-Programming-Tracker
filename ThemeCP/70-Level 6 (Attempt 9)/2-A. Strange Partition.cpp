#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1471/problem/A
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        long long maxVal = 0;
        long long sum = 0;
        for (int &num : arr) {
            cin >> num;
            maxVal += ceil((double) num / x);
            sum += num;
        }

        long long minVal = ceil((double) sum / x);
        cout << minVal << " " << maxVal << endl;
    }
}
// 2 2 2