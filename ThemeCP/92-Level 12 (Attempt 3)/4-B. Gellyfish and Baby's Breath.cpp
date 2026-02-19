#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2116/B
// O(t * n log k)
long long N = 998244353;
int main () {
    vector<long long> pwr(1e5 + 5);
    pwr[0] = 1;
    for (int i = 1; i < pwr.size(); i++) {
        pwr[i] = pwr[i - 1] * 2 % N;
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr1(n);
        vector<long long> arr2(n);

        for (long long &num : arr1) {
            cin >> num;
        }

        for (long long &num : arr2) {
            cin >> num;
        }

        int max1Pos = 0;
        int max2Pos = 0;
        for (int i = 0; i < n; i++) {
            if (arr1[i] > arr1[max1Pos]) {
                max1Pos = i;
            }

            if (arr2[i] > arr2[max2Pos]) {
                max2Pos = i;
            }
            
            if (arr1[max1Pos] > arr2[max2Pos]) {
                long long val1 = pwr[arr1[max1Pos]];
                long long val3 = pwr[arr2[i - max1Pos]];
                long long sum1 = (val1 + val3) % N;
                cout << sum1 << " ";
            } else if (arr1[max1Pos] < arr2[max2Pos]) {
                long long val1 = pwr[arr2[max2Pos]];
                long long val3 = pwr[arr1[i - max2Pos]];
                long long sum1 = (val1 + val3) % N;
                cout << sum1 << " ";
            } else {
                if (arr2[i - max1Pos] > arr1[i - max2Pos]) {
                    long long val1 = pwr[arr1[max1Pos]];
                    long long val3 = pwr[arr2[i - max1Pos]];
                    cout << (val1 + val3) % N << " ";
                } else {
                    long long val1 = pwr[arr2[max2Pos]];
                    long long val3 = pwr[arr1[i - max2Pos]];
                    cout << (val1 + val3) % N << " ";
                }
            }
        }
        cout << endl;
    }
}