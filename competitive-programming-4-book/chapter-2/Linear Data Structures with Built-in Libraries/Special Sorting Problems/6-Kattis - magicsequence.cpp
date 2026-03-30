#include <bits/stdc++.h>

using namespace std;
// https://open.kattis.com/problems/magicsequence
// O(t * n log n)
void countSort(vector<long long> &arr, int size, int exp) {
    vector<long long> res(size);
    vector<int> cnt(10);

    for (int i = 0 ; i < size; i++) {
        cnt[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        res[cnt[(arr[i] / exp) % 10] - 1] = arr[i];
        cnt[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = res[i];
}

void radixSort(vector<long long> &arr, int size) {
    long long maxVal = *max_element(arr.begin(), arr.end());
    // cout << maxVal << endl;
    for (int i = 1; maxVal / i > 0; i *= 10) {
        countSort(arr, size, i);
    }
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long a, b, c;
        cin >> a >> b >> c;
        arr[0] = a;
        for (int i = 1; i < n; i++) {
            arr[i] = (arr[i - 1] * b + a) % c;
        }
        radixSort(arr, arr.size());
        long long x, y;
        cin >> x >> y;
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res = (res * x + arr[i]) % y;
        }
        cout << res << endl;
    }
}