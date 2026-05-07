#include <bits/stdc++.h>

using namespace std;

struct Kandang {
    long long kapasitas;
    long long harga;
};

int main () {
    int k;
    cin >> k;
    deque<Kandang> arr(k);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i].kapasitas;
    }

    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i].harga;
    }

    int n;
    cin >> n;
    deque<long long> bebek(n);
    for (long long &num : bebek) {
        cin >> num;
    }

    sort(arr.begin(), arr.end(), [] (const Kandang &a, const Kandang &b) {
        return a.harga < b.harga;
    });

    sort(bebek.begin(), bebek.end(), greater<long long>());
    long long res = 0;
    while (!bebek.empty()) {
        res += bebek[0] * arr[0].harga;
        arr[0].kapasitas--;
        if (arr[0].kapasitas == 0) {
            arr.pop_front();
        }
        bebek.pop_front();
    }
    cout << res << endl;
}