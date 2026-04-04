#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<int> foods(n);
    vector<int> point(n);
    vector<int> morePoint(n - 1);
    for (int &num : foods) {
        cin >> num;
    }

    for (int &num : point) {
        cin >> num;
    }

    for (int &num : morePoint) {
        cin >> num;
    }

    int res = point[foods[0] - 1];
    for (int i = 1 ; i < foods.size(); i++) {
        res += point[foods[i] - 1];
        if (foods[i] - 1 == foods[i - 1]) {
            res += morePoint[foods[i - 1] - 1];
        }
    }
    cout << res << endl;
}