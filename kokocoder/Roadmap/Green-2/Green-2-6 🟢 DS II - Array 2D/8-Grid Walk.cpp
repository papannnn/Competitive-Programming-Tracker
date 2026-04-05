#include <bits/stdc++.h>

using namespace std;
// O(h * w + s)
int main () {
    int h, w;
    cin >> h >> w;
    int x, y;
    cin >> y >> x;

    y--;
    x--;

    vector<vector<char>> arr(h, vector<char>(w));
    for (vector<char> &a : arr) {
        for (char &c : a) {
            cin >> c;
        }
    }
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') {
            if (x == 0) {
                continue;
            }

            if (arr[y][x - 1] == '#') {
                continue;
            }

            x--;
        } else if (s[i] == 'R') {
            if (x == w - 1) {
                continue;
            }

            if (arr[y][x + 1] == '#') {
                continue;
            }
            x++;
        } else if (s[i] == 'U') {
            if (y == 0) {
                continue;
            }

            if (arr[y - 1][x] == '#') {
                continue;
            }
            y--;
        } else if (s[i] == 'D') {
            if (y == h - 1) {
                continue;
            }

            if (arr[y + 1][x] == '#') {
                continue;
            }
            y++;
        }
    }
    cout << y + 1 << " " << x + 1 << endl;
}