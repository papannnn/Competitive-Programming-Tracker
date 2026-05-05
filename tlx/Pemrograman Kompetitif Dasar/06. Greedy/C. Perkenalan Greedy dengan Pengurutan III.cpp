#include <bits/stdc++.h>

using namespace std;

struct Data {
    long long price;
    long long amt;
};

int main () {
    long long n, d;
    cin >> n >> d;
    deque<Data> arr;
    for (int i = 0 ; i < n ; i++) {
        Data c;
        cin >> c.price >> c.amt;
        arr.push_back(c);
    }

    sort(arr.begin(), arr.end(), [] (const Data &a, const Data &b) {
        return a.price < b.price;
    });

    long long res = 0;
    while (d > 0 && !arr.empty()) {
        long long price = arr[0].price;
        long long amt = arr[0].amt;

        long long canBuy = d / price;

        if (canBuy >= amt) {
            d -= amt * price;
            res += amt;
            arr.pop_front();
        } else {
            d -= canBuy * price;
            res += canBuy;
            arr.pop_front();
        }
    }
    cout << res << endl;
}