#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1859/B
// O(t * n * m log m)
void merge(deque<int> &arr, int l, int mid, int r) {
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

void mergeSort(deque<int> &arr, int l, int r) {
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
        deque<deque<int>> arr;
        for (int i = 0 ; i < n ; i++) {
            int m;
            cin >> m;
            deque<int> temp(m);
            for (int &num : temp) {
                cin >> num;
            }
            mergeSort(temp, 0, temp.size() - 1);
            arr.push_back(temp);
        }

        int minTail = 1e9;
        int minMid = 1e9;
        long long tot = 0;
        for (int i = 0 ; i < arr.size(); i++) {
            tot += arr[i][1];
            minTail = min(minTail, arr[i][0]);
            minMid = min(minMid, arr[i][1]);
        }
        cout << tot - minMid + minTail << endl;
    }
}