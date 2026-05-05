#include <bits/stdc++.h>

using namespace std;
int main () {
    long long n, b;
    cin >> n >> b;
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }
    sort(arr.begin(), arr.end(), greater<long long>());
    int res = 0;
    int idx = 0;
    while (b > 0) {
        b -= arr[idx++];
        res++;
    }
    cout << res << endl;
}