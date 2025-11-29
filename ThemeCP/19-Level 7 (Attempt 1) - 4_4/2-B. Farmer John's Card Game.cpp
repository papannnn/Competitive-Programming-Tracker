#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/2060/B
// O(t * n * m)

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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> deck;

        for (int i = 0 ; i < n; i++) {
            vector<int> arr;
            for (int j = 0 ; j < m; j++) {
                int num;
                cin >> num;
                arr.push_back(num);
            }
            mergeSort(arr, 0, arr.size() - 1);
            deck.push_back(arr);
        }

        vector<int> res;
        int expect = 0;
        unordered_set<int> flagging;
        int ptr = 0;
        int cnt = n * n;
        for (int i = 0 ; i < cnt; i++) {
            if (flagging.find(ptr) != flagging.end()) {
                ptr++;
                if (ptr == n) {
                    ptr = 0;
                }
                continue;
            }
            // cout << "DeckPTR: " << ptr << " " << "expect: " << expect << endl;
            if (deck[ptr][0] == expect) {
                expect++;
                res.push_back(ptr);
                flagging.insert(ptr);
            }

            ptr++;
            if (ptr == n) {
                ptr = 0;
            }
        }
        // cout << flagging.size() << endl;;
        // cout << res.size() << endl;

        if (res.size() != n) {
            cout << -1 << endl;
            continue;
        }

        bool valid = true;
        expect = 0;
        for (int i = 0 ; i < m; i++) {
            if (!valid) {
                break;
            }
            for (int j = 0 ; j < n; j++) {
                if (deck[res[j]][i] == expect) {
                    expect++;
                } else {
                    valid = false;
                    break;
                }
            }
        }
        
        if (!valid) {
            cout << -1 << endl;
        } else {
            for (int i = 0 ; i < res.size(); i++) {
                cout << res[i] + 1 << " ";
            }
            cout << endl;
        }
    }
}