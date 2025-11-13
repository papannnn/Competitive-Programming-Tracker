#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2042/B
// O(t * n log n)

struct Marble {
    int amt;
    int color;
};

void merge(vector<Marble> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<Marble> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1].amt < arr[ptr2].amt) {
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

void mergeSort(vector<Marble> &arr, int l, int r) {
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
        unordered_map<int, int> mapping;
        while (n--) {
            int num;
            cin >> num;
            mapping[num]++;
        }

        vector<Marble> arr;
        int one = 0;
        int res = 0;
        for (auto m : mapping) {
            if (m.second == 1) {
                one++;
                continue;
            }
            res++;
        }
        res += ceil((double) one / 2) * 2;
        cout << res << endl;
    }
}