#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1732/A
// O(t * n log(max(a, b)))
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int currGCD = 0;
        for (int &num : arr) {
            cin >> num;
            currGCD = gcd(currGCD, num);
        }

        if (currGCD == 1) {
            cout << 0 << endl;
            continue;
        }

        int firstRes = 99;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = gcd(arr[i], i + 1);
            if (gcd(temp, currGCD) == 1) {
                firstRes = n - i;
                break;
            }
        }

        int secondRes = 0;
        for (int i = arr.size() - 1; i >= 0 && currGCD != 1; i--) {
            int temp = gcd(arr[i], i + 1);
            secondRes += n - i;
            currGCD = gcd(currGCD, temp);
        }


        cout << min(firstRes, secondRes) << endl;
    }
}