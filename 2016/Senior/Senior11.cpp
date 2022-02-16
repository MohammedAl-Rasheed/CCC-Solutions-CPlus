#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int sumA = 0;
    map<char, int> freqB;
    map<char, int> freqA;

    // get the frequency of each character in A and put in a dictionary
    for (int i = 0; i < A.size(); i++) {
        freqA[A[i]]++;
        freqB[B[i]]++;
    }

    // go through the dictionary A and subtract dictionary B from it
    for(auto it = freqA.begin(); it != freqA.end(); it++) {
        it->second -= freqB[it->first];
        // if its negative that means B has more of that character thus N
        if(it->second < 0) {
            cout << "N";
            exit(0);
        }
        // make b 0
        freqB[it->first] = 0;
        // keep count of the sum for frequency in A
        sumA+=it->second;
    }
    
    
    if(sumA != freqB['*']) {
        cout << "N" << endl;
    } else {
        cout << "A" << endl;
    }



}