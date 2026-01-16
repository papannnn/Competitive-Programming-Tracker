#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1695/B
// O(t * n)
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        // if (arr.size()) {
        //     cout << "Mike" << endl;
        //     continue;
        // }

        if (arr.size() % 2) {
            cout << "Mike" << endl;
            continue;
        }

        int smallestMike = 1e9 + 1;
        int posMike = -1;
        int smallestJoe = 1e9 + 1;
        int posJoe = -1;
        for (int i = 0 ; i < arr.size(); i++) {
            if (i % 2 == 0) {
                if (smallestMike > arr[i]) {
                    smallestMike = arr[i];
                    posMike = i;
                }
                // smallestMike = min(smallestMike, arr[i]);
            } else {
                if (smallestJoe > arr[i]) {
                    smallestJoe = arr[i];
                    posJoe = i;
                }
                // smallestJoe = min(smallestJoe, arr[i]);
            }
        }

        // cout << smallestMike << endl;
        // cout << smallestJoe << endl;
        if (smallestMike > smallestJoe) {
            cout << "Mike" << endl;
        } else if (smallestJoe > smallestMike) {
            cout << "Joe" << endl;
        } else {
            if (posMike < posJoe) {
                cout << "Joe" << endl;
            } else {
                cout << "Mike" << endl;
            }
        }
    }
}
// 5 4 3 4
// 4 3 2 3
// 3 2 1 3
// 2 1 0