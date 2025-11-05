#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/149/A
// O(1)
void merge(vector<int> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<int> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1] > arr[ptr2]) {
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
    int k;
    cin >> k;
    vector<int> arr(12);
    for (int &num : arr) {
        cin >> num;
    }
    mergeSort(arr, 0, arr.size() - 1);
    int res = 0;
    for (int i = 0 ; i < 12 && k > 0; i++) {
        k -= arr[i];
        res++;
    }

    if (k > 0) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }
}