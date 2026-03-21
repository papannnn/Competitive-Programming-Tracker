#include <bits/stdc++.h>

using namespace std;
// https://vjudge.net/problem/UVA-12662
// O(n * q)
int main () {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (string &s : arr) {
        cin >> s;
    }

    int q;
    cin >> q;
    while (q--) {
        int pos;
        cin >> pos;
        pos--;
        // cout << pos << endl;
            // cout << arr[pos] << endl;

        if (arr[pos] != "?") {
            cout << arr[pos] << endl;
            continue;
        }

        string leftGuy = "";
        string rightGuy = "";
        int distLeft = 1;
        int distRight = 1;
        int posLeft = pos - 1;
        while (posLeft >= 0 && arr[posLeft] == "?") {
            posLeft--;
            distLeft++;
        }

        int posRight = pos + 1;
        while (posRight < arr.size() && arr[posRight] == "?") {
            posRight++;
            distRight++;
        }
        
        if (posLeft >= 0 && posLeft < arr.size()) {
            leftGuy = arr[posLeft];
        }

        if (posRight >= 0 && posRight < arr.size()) {
            rightGuy = arr[posRight];
        }

        if (distLeft == distRight && leftGuy != "" && rightGuy != "") {
            cout << "middle of " << leftGuy << " and " << rightGuy << endl;
            continue;
        }

        string prefix = "";
        if (rightGuy == "") {
            while (distLeft--) {
                prefix += "right of ";
            }
            cout << prefix << leftGuy << endl;
            continue;
        }

        if (leftGuy == "") {
            while (distRight--) {
                prefix += "left of ";
            }
            cout << prefix << rightGuy << endl;
            continue;
        }
        
        if (distLeft < distRight) {
            while (distLeft--) {
                prefix += "right of ";
            }
            cout << prefix << leftGuy << endl;
            continue;
        }
        
        if (distLeft > distRight){
            while (distRight--) {
                prefix += "left of ";
            }
            cout << prefix << rightGuy << endl;
            continue;
        }

    }
}