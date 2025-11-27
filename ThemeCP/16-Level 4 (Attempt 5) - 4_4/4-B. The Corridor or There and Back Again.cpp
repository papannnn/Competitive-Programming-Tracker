#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1872/B
// O(t * n log n)

struct Trap {
    int room;
    int sec;
};

void merge(vector<Trap> &arr, int l, int mid, int r) {
    int ptr1 = l;
    int ptr2 = mid + 1;
    vector<Trap> temp;
    while (ptr1 <= mid && ptr2 <= r) {
        if (arr[ptr1].room < arr[ptr2].room) {
            temp.push_back(arr[ptr1++]);
        } else if (arr[ptr1].room > arr[ptr2].room) {
            temp.push_back(arr[ptr2++]);
        } else {

            if (arr[ptr1].sec < arr[ptr2].sec) {
                temp.push_back(arr[ptr1++]);
            } else {
                temp.push_back(arr[ptr2++]);
            }
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

void mergeSort(vector<Trap> &arr, int l, int r) {
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
        vector<Trap> arr;
        for (int i = 0 ; i < n; i++) {
            Trap t;
            cin >> t.room >> t.sec;
            arr.push_back(t);
        }
        mergeSort(arr, 0, arr.size() - 1);

        int res = 1;
        int timer = 1e9;
        unordered_set<int> flagRoom;
        for (Trap &t : arr) {
            if (timer == 0) {
                break;
            }

            if (flagRoom.find(t.room) != flagRoom.end()) {
                continue;
            }

            
            int diff = min(timer, t.room - 1 - res);
            // int prevRes = res;
            res += diff;
            timer -= diff;
            
            if (timer == 0) {
                break;
            }
            
            int roomTimer = ceil((double) t.sec / 2) - 1;
            if (roomTimer >= 0) {
                timer = min(timer - 1, roomTimer);
                res = t.room;
            } else {
                timer = 0;
                break;
            }
            // cout << timer << endl;

            flagRoom.insert(t.room);
        }

        cout << res + timer << endl;
    }
}
