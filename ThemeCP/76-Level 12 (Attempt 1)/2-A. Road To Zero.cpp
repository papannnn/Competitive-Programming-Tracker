#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1342/problem/A
// O(t)
long long option1(long long x, long long y, long long a, long long b) {
    long long diff = max(x, y) - min(x, y);
    long long tot = b * min(x, y);
    tot += a * diff;
    return tot;
}

long long option2(long long x, long long y, long long a, long long b) {
    long long diff = max(x, y) - min(x, y);
    long long tot = a * diff;
    tot += b * max(x, y);
    return tot;
}

long long option3(long long x, long long y, long long a, long long b) {
    long long tot = 0;
    tot += a * x;
    tot += a * y;
    return tot;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long a, b;
        cin >> a >> b;
        
        cout << min(option3(x, y, a, b), min(option1(x, y, a, b), option2(x, y, a, b))) << endl;
    }
}