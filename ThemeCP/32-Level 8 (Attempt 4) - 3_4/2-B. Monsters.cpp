#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1849/B
// O(t * n log n)
struct Monster{
    int idx;
    int health;
};

void merge(vector<Monster> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;
    vector<Monster> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1].health > arr[ptr2].health) {
            temp.push_back(arr[ptr1++]);
        } else if (arr[ptr1].health == arr[ptr2].health) {
            if (arr[ptr1].idx < arr[ptr2].idx) {
                temp.push_back(arr[ptr1++]);
            } else {
                temp.push_back(arr[ptr2++]);
            }
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

void mergeSort(vector<Monster> &arr, int l, int r) {
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
        vector<Monster> arrSmall;
        for (int i = 0 ; i < n; i++) {
            Monster m;
            cin >> m.health;
            m.idx = i + 1;
            if (m.health - k <= 0) {
                arrSmall.push_back(m);
            } else {
                if (m.health % k == 0) {
                    m.health = k;
                } else {
                    m.health = m.health % k;
                }
                arrSmall.push_back(m);
            }
        }

        mergeSort(arrSmall, 0, arrSmall.size() - 1);
        for (int i = 0 ; i < arrSmall.size(); i++) {
            cout << arrSmall[i].idx << " ";
        }
        cout << endl;
    }
}