#include <bits/stdc++.h>

using namespace std;
// O(1)
int main () {
    int H, W;
    cin >> H >> W;
    int h, w;
    cin >> h >> w;
    H -= h;
    W -= w;
    cout << H * W << endl;
}