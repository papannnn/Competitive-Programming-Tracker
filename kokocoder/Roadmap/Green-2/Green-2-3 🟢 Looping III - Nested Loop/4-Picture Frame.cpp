#include <bits/stdc++.h>

using namespace std;
// O(H * W)
int main () {
    int H, W;
    cin >> H >> W;
    cout << string(W + 2, '#') << endl;
    while (H--) {
        string s;
        cin >> s;
        cout << "#";
        cout << s;
        cout << "#" << endl;
    }
    cout << string(W + 2, '#');
}