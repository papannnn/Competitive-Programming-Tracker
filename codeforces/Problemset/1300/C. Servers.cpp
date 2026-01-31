#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/747/problem/C
// O(n * q)
int main () {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    int prevTime = 0;
    for (int i = 0 ; i < q; i++) {
        int timeCome, amountServer, timeNeeded;
        cin >> timeCome >> amountServer >> timeNeeded;

        int serverAvail = 0;
        for (int i = 1; i <= n; i++) {
            int diff = timeCome - prevTime;
            arr[i] = max(0, arr[i] - diff);
            if (arr[i] == 0) {
                serverAvail++;
            }
        }
        prevTime = timeCome;
        if (serverAvail < amountServer) {
            cout << -1 << endl;
            continue;
        }

        int res = 0;
        for (int i = 1; i <= n && amountServer; i++) {
            if (arr[i] == 0) {
                res += i;
                arr[i] = timeNeeded;
                amountServer--;
            }
        }
        
        cout << res << endl;
    }
}
