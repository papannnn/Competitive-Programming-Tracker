#include <bits/stdc++.h>

using namespace std;

long long res = 0;
void merge(vector<long long> &arr, int l, int mid, int r) {
    int ptrL = l;
    int ptrR = mid + 1;
    vector<long long> temp;
    while (ptrL <= mid && ptrR <= r) {
        if (arr[ptrL] <= arr[ptrR]) {
            temp.push_back(arr[ptrL++]);
        } else {
            temp.push_back(arr[ptrR++]);
            res += (mid - ptrL) + 1;
        }
    }

    while (ptrL <= mid) {
        temp.push_back(arr[ptrL++]);
    }

    while (ptrR <= r) {
        temp.push_back(arr[ptrR++]);
    }

    for (int i = 0 ; i < temp.size(); i++) {
        arr[l + i] = temp[i];
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
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (long long &num : arr) {
        cin >> num;
    }

    mergeSort(arr, 0, arr.size() - 1);
    cout << res << endl;
}