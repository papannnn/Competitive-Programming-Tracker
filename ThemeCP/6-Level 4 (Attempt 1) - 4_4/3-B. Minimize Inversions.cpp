#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1918/B
// O(t * n log n)
struct Num {
    int a;
    int b;
};

void merge(vector<Num> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<Num> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (max(arr[ptr1].a, arr[ptr1].b) < max(arr[ptr2].a, arr[ptr2].b)) {
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

void mergeSort(vector<Num> &arr, int l, int r) {
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
        int n;
        cin >> n;
        vector<Num> arr(n);
        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr[i].a = num;
        }

        for (int i = 0 ; i < n; i++) {
            int num;
            cin >> num;
            arr[i].b = num;
        }

        mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0 ; i < arr.size(); i++) {
            cout << arr[i].a << " ";
        }
        cout << endl;
        for (int i = 0 ; i < arr.size(); i++) {
            cout << arr[i].b << " ";
        }
        cout << endl;
    }
}