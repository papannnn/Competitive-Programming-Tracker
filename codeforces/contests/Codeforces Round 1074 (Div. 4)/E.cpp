#include <bits/stdc++.h>

using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<long long> robotArr(n);
        for (long long &num : robotArr) {
            cin >> num;
        }

        vector<long long> spikePos;
        for (int i = 0 ; i < m; i++) {
            long long num;
            cin >> num;
            spikePos.push_back(num);
        }

        sort(spikePos.begin(), spikePos.end());
        
        map<long long, vector<long long>> robotDeadPos;
        // unordered_map<long long, vector<long long>> robotDeadpos; TLE
        for (int i = 0 ; i < robotArr.size(); i++) {
            auto left = lower_bound(spikePos.begin(), spikePos.end(), robotArr[i]);
            auto right = upper_bound(spikePos.begin(), spikePos.end(), robotArr[i]);

            long long leftVal = 1e10;
            if (left != spikePos.begin()) {
                leftVal = *(left - 1);
            }

            long long rightVal = 1e10;
            if (right != spikePos.end()) {
                rightVal = *right;
            }
            
            if (leftVal != 1e10) {
                robotDeadPos[leftVal - robotArr[i]].push_back(i);
            }

            if (rightVal != 1e10) {
                robotDeadPos[rightVal - robotArr[i]].push_back(i);
            }
        }

        string instruction;
        cin >> instruction;
        int pos = 0;
        unordered_set<long long> deadRobot;
        for (int i = 0 ; i < instruction.length(); i++) {
            if (instruction[i] == 'L') {
                pos--;
            } else {
                pos++;
            }

            deadRobot.insert(robotDeadPos[pos].begin(), robotDeadPos[pos].end());
            robotDeadPos.erase(pos);
            cout << n - deadRobot.size() << " ";
        }
        cout << endl;
    }   
}