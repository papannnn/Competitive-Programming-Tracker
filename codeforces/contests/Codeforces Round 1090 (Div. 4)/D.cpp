#include <bits/stdc++.h>

using namespace std;
int main () {

    vector<int> arrFlag(1e6);
    for (int i = 2 ; i < arrFlag.size(); i++) {
        if (arrFlag[i]) {
            continue;
        }
        for (int j = i + i ; j < arrFlag.size(); j += i) {
            arrFlag[j] = 1;
        }
    }

    vector<long long> arrPrime;
    for (int i = 2; i < arrFlag.size(); i++) {
        if (!arrFlag[i]) {
            arrPrime.push_back(i);
        }
    }

    // cout <<arrPrime.size() << endl;
    vector<long long> precompute;

    precompute.push_back(arrPrime.front());
    for (int i = 0; i < arrPrime.size() - 1; i++) {
        precompute.push_back(arrPrime[i] * arrPrime[i + 1]);
    }

    int t;
    cin >> t;
    // // vector<int> precompute = {541, 282943,272483,265189,256027,250997,245009,239117,233273,223693,216221,213443,210677,205193,198907,194477,190087,186623,181451,176399,171371,164009,159197,154433,148987,145157,141367,136891,131753,126727,123197,121103,116939,111547,104927,99221,97343,95477,89951,82919,79523,77837,75067,72899,70747,67591,64507,60491,57599,55687,53357,51983,50621,47053,41989,39203,38021,36863,34571,32399,30967,28891,27221,25591,23707,22499,20711,19043,17947,16637,14351,12317,11663,11021,10403,9797,8633,7387,6557,5767,5183,4757,4087,3599,3127,2491,2021,1763,1517,1147,899,667,437,323,221,143,77,35,15,6};
    while (t--) {
        long long n;
        cin >> n;
        for (int i = 0 ; i < n; i++) {
            cout << precompute[i] << " ";
        }
        cout << endl;
    }
}