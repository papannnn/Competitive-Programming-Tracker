#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1869/B
// O(t * n)

struct Point {
    long long x;
    long long y;
};

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<Point> arr;
        for (int i = 0 ; i < n; i++) {
            Point p;
            cin >> p.x >> p.y;
            arr.push_back(p);
        }

        if (a <= k && b <= k) {
            cout << 0 << endl;
            continue;
        }

        long long res = abs(arr[a - 1].x - arr[b - 1].x) + abs(arr[a - 1].y - arr[b - 1].y);
        long long minAToMajor = 1e17;
        long long minBToMajor = 1e17;
        for (int i = 0; i < k; i++) {
            long long aToMajor = 0;
            if (a - 1 > k - 1) {
                aToMajor = abs(arr[a - 1].x - arr[i].x) + abs(arr[a - 1].y - arr[i].y);
            }

            long long bToMajor = 0;
            if (b - 1 > k - 1) {
                bToMajor = abs(arr[b - 1].x - arr[i].x) + abs(arr[b - 1].y - arr[i].y);
            }
            minAToMajor = min(minAToMajor, aToMajor);
            minBToMajor = min(minBToMajor, bToMajor);
        }
        cout << min(res, minAToMajor + minBToMajor) << endl;
    }
}