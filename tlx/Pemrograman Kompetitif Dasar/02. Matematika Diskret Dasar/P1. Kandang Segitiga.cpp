#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

int main () {
    int n;
    cin >> n;
    vector<Point> arr;
    while (n--) {
        Point p;
        cin >> p.x >> p.y;
        arr.push_back(p);
    }

    vector<vector<long long>> pascal(1001, vector<long long>(1001));
    pascal[0][0] = 1;
    for (int i = 1; i <= 1000; i++) {
        pascal[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            pascal[i][j] = (pascal[i - 1][j - 1]) + (pascal[i - 1][j]);
        }
    }
    cout << pascal[arr.size()][3] << endl;
}