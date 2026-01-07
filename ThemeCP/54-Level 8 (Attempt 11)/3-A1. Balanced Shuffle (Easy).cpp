#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1970/A1
// O(s * log s)

struct Shuffle {
    char c;
    int balance;
};

void merge(vector<Shuffle> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;

    vector<Shuffle> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1].balance < arr[ptr2].balance) {
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

void mergeSort(vector<Shuffle> &arr, int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main () {
    string s;
    cin >> s;

    vector<Shuffle> arr;
    int balance = 0;
    for (int i = 0; i < s.length(); i++) {
        Shuffle shuffle;
        shuffle.c = s[i];
        shuffle.balance = balance;
        arr.push_back(shuffle);
        if (s[i] == '(') {
            balance++;
        } else {
            balance--;
        }
    }
    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0 ; i < arr.size(); i++) {
        cout << arr[i].c;
    }
    cout << endl;
}