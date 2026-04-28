#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxVal = -1;
        int g = 0;
        while (n--) {
            int num;
            cin >> num;
            maxVal = max(maxVal, num);
            g = gcd(g, num);
        }
        cout << maxVal / g << endl;
    }
}