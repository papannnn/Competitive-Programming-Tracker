#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2096/B
// O(t * n log n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> leftArr(n);
        long long sumLeft = 0;
        for (long long &num : leftArr) {
            cin >> num;
            sumLeft += num;
        }

        vector<long long> rightArr(n);
        long long sumRight = 0;
        for (long long &num : rightArr) {
            cin >> num;
            sumRight += num;
        }

        long long sum = 0;
        vector<long long> small;
        for (int i = 0 ; i < n; i++) {
            sum += max(leftArr[i], rightArr[i]);
            small.push_back(min(leftArr[i], rightArr[i]));
        }

        sort(small.begin(), small.end(), greater<long long>());
        for (int i = 0; i < k - 1; i++) {
            sum += small[i];
        }
        sum++;
        cout << sum << endl;
    }
}