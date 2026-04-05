#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    vector<string> arr(10);
    for (string &s : arr) {
        cin >> s;
    }

    bool found = false;

    int a, b, c, d;
    for (int i = 0; i < 10 && !found; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] == '#') {
                a = i;
                c = j;
                found = true;
                break;
            }
        }
    }

    for (int i = c; i < 10; i++) {
        if (arr[a][i] == '#') {
            d = i;
        }
    }

    for (int i = a; i < 10; i++) {
        if (arr[i][c] == '#') {
            b = i;
        }
    }
    cout << a + 1 << " " << b + 1 << endl << c + 1 << " " << d + 1 << endl;
}