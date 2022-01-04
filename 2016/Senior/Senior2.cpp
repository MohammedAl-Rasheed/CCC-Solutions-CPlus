#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int M; cin >> M;
    int N; cin >> N;
    // mimumum total speed(smallest difference between pairs)
    if(M == 1) {
        vector<int> dmojistan;
        vector<int> pegland;
        for(int i = 0; i < N; i++) {
            int a;
            cin >> a; 
            dmojistan.push_back(a);
        }
        for(int i = 0; i < N; i++) {
            int a;
            cin >> a; 
            pegland.push_back(a);
        } 
        sort(dmojistan.begin(), dmojistan.end());
        sort(pegland.begin(), pegland.end());
        int totalSpeed = 0;
        for(int i =0; i < N; i++) {
                 // 5              // 6
                // 1             // 2
               // 4            // 4
            if(dmojistan[i] >= pegland[i]) {
                totalSpeed += dmojistan[i];
            }
            else {
                totalSpeed += pegland[i];
            }
        }
        cout << totalSpeed << endl;
    }
    // maximum total speed(largest difference between each pari)
    else {
        vector<int> all;
        for(int i = 0; i < N; i++) {
            int a;
            cin >> a; 
            all.push_back(a);
        }
        for(int i = 0; i < N; i++) {
            int a;
            cin >> a; 
            all.push_back(a);
        } 
        int totalSpeed = 0;
        // sort vector in desecending order
        sort(all.begin(), all.end(), greater<int>());
        
        for(int i = 0; i < N; i++) {
            totalSpeed += all[i];
        }
        cout << totalSpeed << endl;
    }
}
