#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12541
// O(n log n)

struct Person {
    string name;
    int day;
    int month;
    int year;
};

int main () {
    int n;
    cin >> n;
    vector<Person> arr;
    for (int i = 0 ; i < n; i++) {
        Person p;
        cin >> p.name >> p.day >> p.month >> p.year;
        arr.push_back(p);
    }

    sort(arr.begin(), arr.end(), [](Person &a, Person &b) {
        if (a.year != b.year) {
            return a.year < b.year;
        }

        if (a.month != b.month) {
            return a.month < b.month;
        }

        return a.day < b.day;
    });

    cout << arr.back().name << endl;
    cout << arr.front().name << endl;
}