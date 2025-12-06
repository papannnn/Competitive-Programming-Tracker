#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1987/B
// O(t * n log n)

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
        arr[i + l] = temp[i];
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
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        int maxVal = arr[0];
        deque<int> diffArr;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < maxVal) {
                diffArr.push_back(maxVal - arr[i]);
            } else {
                maxVal = arr[i];
            }
        }

        mergeSort(diffArr, 0, diffArr.size() - 1);
        long long res = 0;
        int incr = 0;
        while (!diffArr.empty()) {
            res += (diffArr[0] - incr) * (diffArr.size() + 1);
            incr += diffArr[0] - incr;
            diffArr.pop_front();
        }
        cout << res << endl;
    }
}