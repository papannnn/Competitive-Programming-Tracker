#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1450/B
// O(t * n ^ 2)
struct Point {
    int x;
    int y;

    auto operator<=>(const Point&) const = default;
};

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<Point> arr;
        for (int i = 0 ; i < n; i++) {
            Point temp;
            cin >> temp.x >> temp.y;
            arr.push_back(temp);
        }

        bool valid = false;
        for (int i = 0 ; i < arr.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < arr.size(); j++) {

                int dist = abs(arr[i].x - arr[j].x) + abs(arr[i].y - arr[j].y);
                if (dist <= k) {
                    cnt++;
                }
            }
            if (cnt == n) {
                valid = true;
            }
        }
        cout << (valid ? 1 : -1) << endl;
    }
}