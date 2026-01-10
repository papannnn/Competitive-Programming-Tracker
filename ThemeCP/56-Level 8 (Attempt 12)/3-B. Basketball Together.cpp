#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1725/B
// O(n log n)
int main () {
    long long n, d;
    cin >> n >> d;
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }

    sort(arr.begin(), arr.end());
    int l = 0;
    int r = arr.size() - 1;
    int res = 0;
    while (l <= r) {
        long long valBig = arr[r];
        long long tot = valBig;
        
        while (l < r && tot <= d) {
            tot += valBig;
            l++;
        }

        if (tot > d) {
            res++;
        }
        r--;
    }
    cout << res << endl;
}