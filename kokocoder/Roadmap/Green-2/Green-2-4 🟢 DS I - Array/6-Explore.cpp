#include <bits/stdc++.h>

using namespace std;
// O(n)
struct Bonus {
    long long room;
    long long time;
};

int main () {
    long long n, m, t;
    cin >> n >> m >> t;
    vector<long long> arr(n - 1);
    vector<Bonus> bonusArr(m);
    for (long long &num : arr) {
        cin >> num;
    }

    for (Bonus &b : bonusArr) {
        cin >> b.room >> b.time;
    }

    bool valid = true;
    long long cnt = 0;
    for (int i = 0 ; i < arr.size(); i++) {
        valid &= t > 0;
        if (cnt < bonusArr.size() && bonusArr[cnt].room - 1 == i) {
            t += bonusArr[cnt].time;
            cnt++;
        }

        t -= arr[i];
    }
    valid &= t > 0;
    cout << (valid ? "Yes" : "No") << endl;
}