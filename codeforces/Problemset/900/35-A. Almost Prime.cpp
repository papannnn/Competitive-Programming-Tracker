#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/26/A
// O(n)
int main () {
    vector<int> flagging (1500 + 1);
    for (int i = 2; i <= 1500; i++) {
        if (flagging[i]) {
            continue;
        }
        int curr = i * 2;
        for (int j = i * 2; j <= 1500; j += i) {
            flagging[j] = 1;
        }
    }

    vector<int> primes;
    for (int i = 2; i < flagging.size(); i++) {
        if (flagging[i] == 0) {
            primes.push_back(i);
        }
    }
    
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 0 ; j < primes.size(); j++) {
            cnt += i % primes[j] == 0;
        }
        res += cnt == 2;
    }
    cout << res << endl;
}