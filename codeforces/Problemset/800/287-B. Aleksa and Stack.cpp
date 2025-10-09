#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1878/B
// O(10^7 log log 10^7)
int main () {
    vector<int> arrFlag(1e7);
    for (int i = 2 ; i < arrFlag.size(); i++) {
        if (arrFlag[i]) {
            continue;
        }
        for (int j = i + i ; j < arrFlag.size(); j += i) {
            arrFlag[j] = 1;
        }
    }

    vector<int> arrPrime;
    for (int i = 2; i < arrFlag.size(); i++) {
        if (!arrFlag[i]) {
            arrPrime.push_back(i);
        }
    }
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1 ; i <= n; i++) {
            cout << arrPrime[i] << " ";
        }
        cout << endl;
    }
}