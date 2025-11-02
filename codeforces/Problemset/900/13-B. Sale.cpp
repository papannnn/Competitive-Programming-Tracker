#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/34/B
// O(n + n log n)
void merge(vector<int> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<int> temp;
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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int &num : arr) {
        cin >> num;
    }

    vector<int> arrProfit;
    for (int i = 0 ; i < arr.size(); i++) {
        if (arr[i] < 0) {
            arrProfit.push_back(arr[i]);
        }
    }

    mergeSort(arrProfit, 0, arrProfit.size() - 1);

    int res = 0;
    for (int i = 0 ; i < arrProfit.size() && i < m; i++) {
        res += abs(arrProfit[i]);
    }
    cout << res << endl;
}
