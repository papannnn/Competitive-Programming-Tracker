#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/sortofsorting
// O(t * n log n)
int main () {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<string> arr(n);
        for (string &s : arr) {
            cin >> s;
        }

        for (int i = 0 ; i < arr.size() - 1; i++) {
            for (int j = 0; j < arr.size() - i - 1; j++) {
                if (arr[j + 1][0] == arr[j][0] && arr[j + 1][1] == arr[j][1]) {
                    continue;
                }

                if (arr[j][0] != arr[j + 1][0]) {
                    if (arr[j][0] > arr[j + 1][0]) {
                        swap(arr[j + 1], arr[j]);
                        continue;
                    }
                } else {
                    if (arr[j][1] > arr[j + 1][1]) {
                        swap(arr[j + 1], arr[j]);
                        continue;
                    }
                }
            }
        }

        for (string &s : arr) {
            cout << s << endl;
        }
        cout << endl;
    }
    
}