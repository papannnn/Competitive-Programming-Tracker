#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2162/C
// O(t)
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        
        string binaryA = bitset<50>(a).to_string();
        string binaryB = bitset<50>(b).to_string();
        
        int posA = -1;
        for (int i = 0; i < binaryA.size(); i++) {
            if (binaryA[i] == '1') {
                posA = i;
                break;
            }
        }

        int posB = -1;
        for (int i = 0; i < binaryB.size(); i++) {
            if (binaryB[i] == '1') {
                posB = i;
                break;
            }
        }

        if (posA > posB) {
            cout << -1 << endl;
            continue;
        }

        long long x = pow(2, binaryA.size() - 1);
        deque<long long> resArr;
        for (int i = 0; i < binaryA.size(); i++) {
            if (binaryA[i] != binaryB[i]) {
                resArr.push_front(x);
            }
            x /= 2;
        }
        cout << resArr.size() << endl;
        for (int i = 0; i < resArr.size(); i++) {
            cout << resArr[i] << " ";
        }

        cout << endl;
    }
}