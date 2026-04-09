#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long sum = 0;
    for (long long& num : arr) {
        cin >> num;
        sum += num;
    }

    long long x;
    cin >> x;
    long long res = x / sum * n;
    x = x % sum;
    for (int i = 0 ; i < arr.size() && x >= 0; i++) {
        res++;
        x -= arr[i];
    }
    cout << res << endl;
}