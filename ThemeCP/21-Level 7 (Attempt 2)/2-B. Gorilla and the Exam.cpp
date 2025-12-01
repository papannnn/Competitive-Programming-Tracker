#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2057/B
// O(t * n log n)
struct S {
    int cnt;
};

void merge(vector<int> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<int> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1] > arr[ptr2]) {
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
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for (int &num : arr) {
            cin >> num;
        }

        sort(arr.begin(), arr.end());
        deque<int> freq = {1};
        for (int i = 1 ; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                freq[freq.size() - 1]++;
            } else {
                freq.push_back(1);
            }
        }

        sort(freq.begin(), freq.end());
        while (true) {
            if (freq.size() == 1) {
                break;
            }

            if (k < freq[0]) {
                break;
            }

            k -= freq[0];
            freq.pop_front();
        }
        cout << freq.size() << endl;
    }
}