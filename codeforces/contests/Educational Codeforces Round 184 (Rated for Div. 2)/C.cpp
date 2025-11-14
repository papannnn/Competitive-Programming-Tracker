#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/2169/problem/C
// O(t * n)

int getValue(vector<int> &arr, vector<int> &prefix, int l, int r) {
    int size = r - l + 1;
    int prevPrefixSum;
    if (l == 0) {
        prevPrefixSum = 0;
    } else {
        prevPrefixSum = prefix[l - 1];
    }
    int currVal = prefix[r] - prevPrefixSum;
    int newVal = size * (l + r);
    return newVal - currVal;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        vector<int> prefix(n + 1);
        int sum = 0;
        for (int i = 1; i < arr.size(); i++) {
            cin >> arr[i];
            sum += arr[i];
            prefix[i] = sum;
        }
        
        int l = 1;
        int r = arr.size() - 1;
        int bestDiff = 0;
        int bestL = 0;
        int bestR = 0;
        if (getValue(arr, prefix, l, r) > bestDiff) {
            bestDiff = getValue(arr, prefix, l, r);
            bestL = l;
            bestR = r;
        }
        
        while (l < r) {
            int goLeftDiff = getValue(arr, prefix, l + 1, r);
            int goRightDiff = getValue(arr, prefix, l, r - 1);
            if (goLeftDiff < goRightDiff) {
                if (goRightDiff > bestDiff) {
                    bestDiff = goRightDiff;
                    bestL = l;
                    bestR = r - 1;
                }
                
                r--;
            } else {
                if (goLeftDiff > bestDiff) {
                    bestDiff = goLeftDiff;
                    bestL = l + 1;
                    bestR = r;
                }
                
                l++;
            }
        }
        cout << sum + bestDiff << endl;
    }
}