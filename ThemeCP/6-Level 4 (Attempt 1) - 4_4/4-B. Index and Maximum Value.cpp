#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2007/B
// O(t * n log n)

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
        arr[i + l] = temp[i];
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int maxVal = -1;
        for (int &num : arr) {
            cin >> num;
            maxVal = max(maxVal, num);
        }


        for (int i = 0; i < k; i++) {
            char c;
            int l, r;
            cin >> c >> l >> r;
            if (maxVal >= l && maxVal <= r) {
                if (c == '-') {
                    maxVal--;
                } else {
                    maxVal++;
                }
            }
            cout << maxVal << " ";
        }
        cout << endl;
    }
}