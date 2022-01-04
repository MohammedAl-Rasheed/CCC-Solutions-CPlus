#include<iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
using namespace std;

int main() {
    int J;
    cin >> J;
    int A;
    cin >> A;
    map<char, int> dictSizes = {
        {'S', 0},
        {'M', 1},
        {'L', 2}
    };
    vector<int>jerseys;
    // initilize a vector of all the sizes available, convert them to int so we can do some comparasions
    for(int i = 0; i < J; i++) {
        char size;
        cin >> size;
        jerseys.push_back(dictSizes[size]);
    }

    int requestSatasfied = 0;
    for(int i = 0; i < A; i++) {
        char size;
        int jerseyNumber;
        cin >> size >> jerseyNumber;
        // cout << "size: " << size << " jerseyNumber: " << jerseyNumber << "\n";
        // cout << jerseys[jerseyNumber - 1] << "\n";
        if(jerseys[jerseyNumber - 1] >= dictSizes[size]) {
            // cout << "request satasfied\n";
            requestSatasfied++;
            jerseys[jerseyNumber - 1] = -1;
        }
    }
   
    cout << requestSatasfied << endl;
}

// jerseyNumber -> a
// s -> dictSizes[size]
// N -> J
// M -> A