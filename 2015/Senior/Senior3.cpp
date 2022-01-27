#include <bits/stdc++.h>
using namespace std;

// print vector function
template <typename T>
void printVector(vector<T> vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main() {
    int G;
    cin >> G;
    // create a vector that holds 0's
    vector<int> gates(G+1);
    // make vector hold 0 - G
    iota (begin(gates), end(gates), -1);

    int P;
    cin >> P;
    // intilize vector that holds the planes
    vector<int> planes;
    for(int i = 0; i < P; i++) {
        int p;
        cin >> p;
        planes.push_back(p);
    }

    int count = 0;
    for(int i = 0; i < planes.size(); i++) {
        int lowerBound = lower_bound(begin(gates), end(gates), planes[i]) - begin(gates);
        if(gates[lowerBound-1] != -1) {
            gates.erase(gates.begin() + (lowerBound-1));
            count++;
        }
        else {
            break;
        }
    }
    cout << count << endl;
}