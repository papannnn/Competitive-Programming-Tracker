#include <bits/stdc++.h>

using namespace std;
int main () {
    long long n;
    long long x;
    cin >> n;
    cin >> x;
    deque<int> res;
    while (n) {
        res.push_front(n % x);
        n /= x;
    }

    for (int &num : res) {
        cout << num;
    }
}