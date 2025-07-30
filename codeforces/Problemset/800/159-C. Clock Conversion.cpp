#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/problemset/problem/1950/C
// O(n)
int main () {
    int n;
    cin >> n;
    while (n--) {
        int hour, min;
        scanf("%d:%d", &hour, &min);
        string time;
        if (hour == 0) {
            hour = 12;
            time = "AM";
        } else if (hour == 12) {
            time = "PM";
        } else if (hour > 12) {
            hour -= 12;
            time = "PM";
        } else {
            time = "AM";
        }

        if (hour < 10) {
            cout << "0";
        }
        cout << hour << ":";

        if (min < 10) {
            cout << "0";
        }

        cout << min << " " << time << endl;
    }
}