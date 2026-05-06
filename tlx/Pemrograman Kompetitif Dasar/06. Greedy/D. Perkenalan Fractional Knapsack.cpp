#include <bits/stdc++.h>

using namespace std;

struct Data {
    long long berat;
    double harga;
};

int main () {
    long long n, x;
    cin >> n >> x;
    deque<Data> arr(n);
    for (int i = 0 ; i < arr.size(); i++) {
        cin >> arr[i].berat;
    }

    for (int i = 0 ; i < arr.size(); i++) {
        cin >> arr[i].harga;
    }

    double res = 0;
    sort(arr.begin(), arr.end(), [] (const Data &a, const Data &b) {
        double dataA = a.harga / a.berat;
        double dataB = b.harga / b.berat;
        return dataA > dataB;
    });

    // for (int i = 0; i < arr.size(); i++) {
    //     cout << (arr[i].harga / arr[i].berat) << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < arr.size(); i++) {
    //     cout << arr[i].harga << " ";
    // }
    // cout << endl;

    while (x > 0 && !arr.empty()) {
        long long take = min(x, arr[0].berat);
        double pricePerKg = arr[0].harga / arr[0].berat;
        x -= take;
        res += pricePerKg * take;
        arr.pop_front();
    }
    cout << fixed << setprecision(5) <<  res << endl;
}