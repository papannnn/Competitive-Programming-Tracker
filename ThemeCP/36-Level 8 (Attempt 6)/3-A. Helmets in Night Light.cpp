#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1876/A
// O(t * n log n)


struct People {
    int cost;
    int limit;
};

void merge(deque<People> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<People> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1].cost < arr[ptr2].cost) {
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

    for (int i = 0; i < temp.size(); i++) {
        arr[l + i] = temp[i];
    }
}

void mergeSort(deque<People> &arr, int l, int r) {
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
        deque<People> arr(n);
        for (People &p : arr) {
            cin >> p.limit;
        }

        for (People &p : arr) {
            cin >> p.cost;
        }

        mergeSort(arr, 0, arr.size() - 1);
        long long res = k;

        deque<People> call;
        call.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++) {
            if (call[0].cost < k) {
                call[0].limit--;
                res += call[0].cost;
                if (call[0].limit == 0) {
                    call.pop_front();
                }
            } else {
                res += k;
            }
            call.push_back(arr[i]);
        }
        cout << res << endl;
    }
}