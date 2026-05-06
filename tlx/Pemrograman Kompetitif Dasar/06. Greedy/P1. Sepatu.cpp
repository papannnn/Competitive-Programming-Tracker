#include <bits/stdc++.h>

using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    deque<int> bebek(n);
    deque<int> sepatu(m);
    for (int &num : bebek) {
        cin >> num;
    }

    for (int &num : sepatu) {
        cin >> num;
    }

    sort(bebek.begin(), bebek.end());
    sort(sepatu.begin(), sepatu.end());

    long long res = 0;
    while (!bebek.empty() && !sepatu.empty()) {
        long long bebekSize = bebek[0];
        while (!sepatu.empty() && sepatu[0] < bebekSize) {
            sepatu.pop_front();
        }

        if (sepatu.empty()) {
            break;
        }

        if (sepatu[0] == bebekSize || sepatu[0] == bebekSize + 1) {
            res++;
            sepatu.pop_front();
        }
        bebek.pop_front();
    }
    cout << res << endl;
}