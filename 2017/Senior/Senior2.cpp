#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> tides;
    vector<int> temp;
    for(int i = 0; i < N; i++) {
        int tide;
        cin >> tide;
        tides.push_back(tide);
    }
    sort(tides.begin(), tides.end());
    if(N%2 == 0) {
        int mid = N / 2;
        for(int i = 0; i < mid; i++) {
            cout << tides[mid - i - 1] << " " << tides[mid + i] << " ";
        }
    }
    else {
        int mid = N / 2;
        for(int i = 0; i < mid; i++) {
            cout << tides[mid - i] << " " << tides[mid + i + 1] << " ";
        }
        cout << tides[0];
    }

}