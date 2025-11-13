#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2124/A
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

    for (int i = 0; i < temp.size(); i++) {
        arr[l + i] = temp[i];
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
        vector<int> arr1(n);
        for (int &num : arr1) {
            cin >> num;
        }
        vector<int> arr2(arr1);
        mergeSort(arr2, 0, arr2.size() - 1);

        deque<int> remove;
        for (int i = 0 ; i < arr1.size(); i++) {
            if (arr1[i] == arr2[i]) {
                remove.push_back(i);
            }
        }

        if (remove.size() == arr1.size()) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << arr1.size() - remove.size() << endl;
        for (int i = 0 ; i < arr1.size(); i++) {
            if (!remove.empty() && remove[0] == i) {
                remove.pop_front();
                continue;
            }

            cout << arr1[i] << " ";
        }
        cout << endl;
    }
}