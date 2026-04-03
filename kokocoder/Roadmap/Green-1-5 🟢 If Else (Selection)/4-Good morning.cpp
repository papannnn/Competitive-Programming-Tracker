#include <bits/stdc++.h>

using namespace std;
// O(1)
struct Time {
    int hour;
    int min;

    bool operator<(Time &a) {
        if (this->hour != a.hour) {
            return this->hour < a.hour;
        }

        return this->min <= a.min;
    }
};

int main () {
    Time takahashi, aoki;
    cin >> takahashi.hour >> takahashi.min >> aoki.hour >> aoki.min;
    if (takahashi < aoki) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
}