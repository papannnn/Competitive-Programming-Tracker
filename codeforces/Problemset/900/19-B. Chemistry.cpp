#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1883/B
// O(t * s)
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

    for (int i = 0; i < temp.size(); i++) {
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
        int _, k;
        cin >> _ >> k;
        string s;
        cin >> s;
        vector<int> mapping(26);
        for (int i = 0 ; i < s.length(); i++) {
            mapping[s[i] - 'a']++;
        }

        int odd = 0;
        for (int i = 0 ; i < mapping.size(); i++) {
            if (mapping[i] % 2) {
                odd++;
            }
        }
        
        if (k >= odd) {
            k -= odd;
            odd = 0;
        } else {
            odd -= k;
            k = 0;
        }

        if (k == 0) {
            cout << (odd <= 1 ? "YES" : "NO") << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}