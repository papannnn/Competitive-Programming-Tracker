#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1629/A
// O(t * n log n)

struct Ram {
    int required;
    int added;
};

void merge(vector<Ram> &arr, int l, int mid, int r) {
    int firstPtr = l;
    int secondPtr = mid + 1;

    vector<Ram> temp;
    while (firstPtr <= mid && secondPtr <= r) {
        if (arr[firstPtr].required < arr[secondPtr].required) {
            temp.push_back(arr[firstPtr++]);
        } else {
            temp.push_back(arr[secondPtr++]);
        }
    }

    while (firstPtr <= mid) {
        temp.push_back(arr[firstPtr++]);
    }

    while (secondPtr <= r) {
        temp.push_back(arr[secondPtr++]);
    }

    for (int i = 0; i < temp.size(); i++) {
        arr[l + i] = temp[i];
    }
} 

void mergeSort(vector<Ram> &arr, int l, int r) {
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
        vector<Ram> arr(n);
        for (int i = 0 ; i < n; i++) {
            int required;
            cin >> required;
            arr[i].required = required;
        }

        for (int i = 0 ; i < n; i++) {
            int added;
            cin >> added;
            arr[i].added = added;
        }

        mergeSort(arr, 0, arr.size() - 1);

        for (int i = 0 ; i < arr.size(); i++) {
            if (k >= arr[i].required) {
                k += arr[i].added;
            } else {
                break;
            }
        }

        cout << k << endl;
    }
}