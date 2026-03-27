#include <bits/stdc++.h>

using namespace std;
// O(t * n log n)
struct Family {
    string name;
    vector<int> data;
};


int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Family> arr;
        for (int i = 0 ; i < n; i++) {
            Family temp;
            string name;
            string data;
            string dump;
            cin >> name >> data >> dump;
            name = name.substr(0, name.size() - 1);

            stringstream str(data);
            string val;
            vector<int> dataArr;
            while (getline(str, val, '-')) {
                if (val == "upper") {
                    dataArr.push_back(1);
                } else if (val == "middle") {
                    dataArr.push_back(2);
                } else {
                    dataArr.push_back(3);
                }
            }
            reverse(dataArr.begin(), dataArr.end());
            while (dataArr.size() != 10) {
                dataArr.push_back(2);
            }
            temp.name = name;
            temp.data = dataArr;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end(), [](Family &a, Family &b) {
            if (a.data != b.data) {
                return a.data < b.data;
            }
            return a.name < b.name;
        });

        for (Family &f : arr) {
            cout << f.name << endl;
        }
        cout << "==============================" << endl;
    }
}