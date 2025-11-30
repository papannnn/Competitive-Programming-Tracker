#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1995/B1
// O(t * n log n)

void merge(vector<long long> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;
    vector<long long> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1] < arr[ptr2]) {
            temp.push_back(arr[ptr1++]);
        } else {
            temp.push_back(arr[ptr2++]);
        }
    }

    while (ptr1 <= mid) {
        temp.push_back(arr[ptr1++]);
    }

    while (ptr2 <= r) {
        temp.push_back(arr[ptr2++]);
    }

    for (int i = 0 ; i < temp.size(); i++) {
        arr[i + l] = temp[i]; 
    }
}

void mergeSort(vector<long long> &arr, int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        mergeSort(arr, 0, arr.size() - 1);
        int l = 0;
        int i = 0;
        long long sum = 0;
        long long res = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            while (abs(arr[l] - arr[i]) > 1) {
                sum -= arr[l];
                l++;
            }

            while (sum > k) {
                sum -= arr[l];
                l++;
            }
            res = max(res, sum);
        }
        cout << res << endl;
    }
}