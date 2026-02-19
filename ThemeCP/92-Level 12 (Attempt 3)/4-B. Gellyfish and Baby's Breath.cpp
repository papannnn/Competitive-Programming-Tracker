#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2116/B
// O(t * n log k)
long long N = 998244353;
long long exponentiation(long long base, long long exp) {
    long long res = 1;
    // long long base = 2;
    while (exp > 0) {
        if (exp % 2) {
            res = (res * base) % 998244353;
        }
 
        base = (base * base) % 998244353;
        exp >>= 1;
    }
    return res;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr1(n);
        vector<long long> arr2(n);

        vector<long long> arrMax1;
        vector<long long> arrMax2;
        vector<long long> arrMax1Pos;
        vector<long long> arrMax2Pos;

        for (long long &num : arr1) {
            cin >> num;
        }

        for (long long &num : arr2) {
            cin >> num;
        }

        long long maxVal = 0;
        long long pos = 0;
        for (int i = 0 ; i < n; i++) {
            if (arr1[i] > maxVal) {
                pos = i;
                maxVal = arr1[i];
            }
            arrMax1.push_back(maxVal);
            arrMax1Pos.push_back(pos);
            // cout << maxVal << 
        }

        maxVal = 0;
        pos = 0;
        for (int i = 0 ; i < n; i++) {
            if (arr2[i] > maxVal) {
                pos = i;
                maxVal = arr2[i];
            }
            arrMax2.push_back(maxVal);
            arrMax2Pos.push_back(pos);
        }


        // for (long long &n : arrMax2Pos) {
        //     cout << n << " ";
        // }
        // cout << endl;

        for (int i = 0; i < n; i++) {
            long long val1 = exponentiation(2, arrMax1[i]);
            long long val2 = exponentiation(2, arrMax2[i]);
            long long val3 = exponentiation(2, arr2[i - arrMax1Pos[i]]);
            long long val4 = exponentiation(2, arr1[i - arrMax2Pos[i]]);
            long long sum1 = (val1 + val3) % N;
            long long sum2 = (val2 + val4) % N;
            cout << max(sum1, sum2) << " ";
        }
        cout << endl;
    }
}