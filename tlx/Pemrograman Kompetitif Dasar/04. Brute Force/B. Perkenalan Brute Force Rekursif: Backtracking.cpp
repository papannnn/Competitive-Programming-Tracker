#include <bits/stdc++.h>

using namespace std;
vector<int> arr;
void traverse(int i, vector<int> &temp, int k) {
    if (i > arr.size()) {
        return;
    }

    if (temp.size() == k) {
        for (int &num : temp) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    temp.push_back(arr[i]);
    traverse(i + 1, temp, k);
    temp.pop_back();
    traverse(i + 1, temp, k);
}

int main () {
    int n, k;
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
    }

    vector<int> temp;
    traverse(0, temp, k);
}