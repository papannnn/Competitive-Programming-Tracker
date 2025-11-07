#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1855/B
// O(t * n) // This is stupid
int main () {
    vector<bool> flag(1000 + 1);
    for (int i = 2; i * i <= 1000; i++) {
        if (flag[i]) {
            continue;
        }

        for (int j = i * i; j <= 1000; j += i) {
            flag[j] = true;
        }
    }

    vector<int> primes;
    primes.push_back(1);
    for (int i = 2 ; i < flag.size(); i++) {
        if (!flag[i]) {
            primes.push_back(i);
            // cout << i << " ";
        }
    }
    // cout << endl;

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        int maxVal = 1;
        for (int i = 1 ; i < primes.size(); i++) {
            int curr = primes[i];
            int cnt = 0;
            // cout << primes[i - 1] - 1 << endl;
            while (true) {
                if (curr == 0 || n % curr != 0) {
                    break;
                }
                // cout << curr << " ";
                cnt++;
                maxVal = max(maxVal, cnt);
                curr--;
            }

            curr = primes[i] + 1;
            while (true) {
                if (n % curr != 0) {
                    break;
                }
                cnt++;
                maxVal = max(maxVal, cnt);
                curr++;
            }
            // cout << endl;
        }
        cout << maxVal << endl;
    }

    cout << endl;
}