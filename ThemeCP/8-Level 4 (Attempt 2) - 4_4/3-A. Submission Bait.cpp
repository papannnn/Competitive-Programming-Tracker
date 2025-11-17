#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1990/A
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
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mapping;
        for (int &num : arr) {
            cin >> num;
            mapping[num]++;
        }

        mergeSort(arr, 0, arr.size() - 1);
        vector<int> unique;
        unordered_set<int> flag;
        for (int i = 0 ; i < arr.size(); i++) {
            if (flag.find(arr[i]) != flag.end()) {
                continue;
            }

            unique.push_back(arr[i]);
            flag.insert(arr[i]);
        }

        bool valid = false;
        for (int i = unique.size() - 1; i >= 0; i--) {
            valid |= mapping[unique[i]] % 2;
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}
