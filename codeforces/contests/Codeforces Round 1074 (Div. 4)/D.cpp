#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;
        vector<long long> arr(n);
        for (long long &num : arr) {
            cin >> num;
        }

        vector<long long> original(arr);
        vector<long long> lastUpdated(n);
        int start = 0;
        for (int i = 0 ; i < m; i++) {
            int b, c;
            cin >> b >> c;

            if (lastUpdated[b - 1] < start) {
                arr[b - 1] = original[b - 1];
            }

            arr[b - 1] += c;
            lastUpdated[b - 1] = i;
            if (arr[b - 1] > h) {
                start = i + 1;
                arr[b - 1] = original[b - 1];
            }
        }

        for (int i = 0 ; i < arr.size(); i++) {
            if (lastUpdated[i] < start) {
                cout << original[i] << " ";
            } else {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }   
}