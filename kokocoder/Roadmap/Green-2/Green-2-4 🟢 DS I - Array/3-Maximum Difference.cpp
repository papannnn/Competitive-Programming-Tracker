#include <bits/stdc++.h>

using namespace std;
// O(n)
int main () {
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long minVal = 1e9;
    long long maxVal = 0;
    for (long long& num : arr) {
        cin >> num;
        maxVal = max(maxVal, num);
        minVal = min(minVal, num);
    }
    cout << maxVal - minVal << endl;
}