#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2041/E
// O(t)
int main () {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 1 << endl;
        cout << a << endl;
        return 0;
    }
    
    deque<int> res;
    res.push_back(b);
    res.push_back(b);
    int val = (a * 3) - (b + b);
    res.push_front(val);

    cout << res.size() << endl;
    for (int &n : res) {
        cout << n << " ";
    }
    cout << endl;
}