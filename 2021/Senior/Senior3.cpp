#include <bits/stdc++.h>
using namespace std;

// N freinds
int N;
// position
int P;
// speed
int W;
// music
int D;
// output
int C;

vector<int> positions;
vector<int> speeds;
vector<int> ability;
// 64-bit integer
int timeReq;
// function that takes the position of the concert and returns time for everyone to hear it
int time(int pos) {
    // loop through each freind
    for(int i = 0; i < N; i++) {
        int leftRange = positions[i] - ability[i]; 
        int rightRange = positions[i] + ability[i];

        // check if freind can hear the concert
        if(pos >= leftRange && pos <= rightRange) {
            continue;
        }
   }
}
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> P >> W >> D;
        positions.push_back(P);
        speeds.push_back(W);
        ability.push_back(D);
    }
}