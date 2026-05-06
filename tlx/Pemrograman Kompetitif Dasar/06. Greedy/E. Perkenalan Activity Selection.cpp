#include <bits/stdc++.h>

using namespace std;

struct Activity {
    long long start;
    long long end;
};

int main () {
    int n;
    cin >> n;
    deque<Activity> arr;
    for (int i = 0 ; i < n; i++) {
        Activity a;
        long long start, duration;
        cin >> start >> duration;
        a.start = start;
        a.end = start + duration;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end(), [] (const Activity &a, const Activity &b) {
        return a.end < b.end;
    });

    long long res = 0;
    while (!arr.empty()) {
        long long end = arr[0].end;
        res++;
        arr.pop_front();
        while (!arr.empty() && arr[0].start < end) {
            arr.pop_front();
        }
    }
    cout << res << endl;
}