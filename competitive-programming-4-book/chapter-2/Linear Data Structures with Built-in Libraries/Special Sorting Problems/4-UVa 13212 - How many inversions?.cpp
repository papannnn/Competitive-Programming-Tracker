#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-13212
// O(t * n log n)
void merge(vector<int> &arr, int l, int mid, int r, long long &inversion) {
    int ptrL = l;
    int ptrR = mid + 1;
    vector<int> temp;
    while (ptrL <= mid && ptrR <= r) {
        if (arr[ptrL] <= arr[ptrR]) {
            temp.push_back(arr[ptrL++]);
        } else {
            temp.push_back(arr[ptrR++]);
            inversion += (mid - ptrL + 1);
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

void mergeSort(vector<int> &arr, int l, int r, long long &inversion) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid, inversion);
        mergeSort(arr, mid + 1, r, inversion);
        merge(arr, l, mid, r, inversion);
    }
}

int main () {
    int n;
    bool first = true;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        long long inversion = 0;
        mergeSort(arr, 0, arr.size() - 1, inversion);
        cout << inversion << endl;
    }
}