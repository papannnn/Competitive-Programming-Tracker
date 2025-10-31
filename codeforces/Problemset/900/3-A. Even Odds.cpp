    #include <bits/stdc++.h>

    using namespace std;
    // https://codeforces.com/problemset/problem/318/A
    // O(1)
    int main () {
        long long k, n;
        cin >> k >> n;
        long long num = ceil((double) k / 2);
        if (n > num) {
            cout << (n - num) * 2 << endl;
        } else {
            cout << 1 + (n - 1) * 2 << endl;
        }
    }