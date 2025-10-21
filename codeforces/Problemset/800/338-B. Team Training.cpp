#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2091/B
// O(t * n log n)

void merge(vector<int> &arr, int l, int mid, int r) {
    int ptrL = l;
    int ptrR = mid + 1;
    vector<int> temp;
    while (ptrL <= mid && ptrR <= r) {
        if (arr[ptrL] > arr[ptrR]) {
            temp.push_back(arr[ptrL++]);
        } else {
            temp.push_back(arr[ptrR++]);
        }
    }

    while (ptrL <= mid) {
        temp.push_back(arr[ptrL++]);
    }

    while (ptrR <= r) {
        temp.push_back(arr[ptrR++]);
    }

    int i = l;
    for (int i = 0 ; i < temp.size(); i++) {
        arr[l + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int l, int r) {
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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }
        mergeSort(arr, 0, arr.size() - 1);
        int ptr = 0;
        int res = 0;
        while (ptr < arr.size()) {
            int cnt = 1;
            int val = arr[ptr++];
            while (ptr < arr.size() && (val * cnt) < x) {
                cnt++;
                val = arr[ptr++];
            }
            
            if (val * cnt >= x) {
                res++;
            }
        }
        cout << res << endl;;
    }
}