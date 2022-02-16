#include <bits/stdc++.h>
using namespace std;

int splitUp(vector<int> spots, int K, int N) {
}

int numberOfDays(int K, int N) {
    // calculate how many days it takes for K to get over N
    int days = 1;
    while(K < N) {
        K += K;
        days++;
    }
}



int main() {
int K, N;
vector<int> spots;
vector<vector<int>> allSpots;
cin >> N >> K;
for(int i = 0; i < N; i++) {
    int a;
    cin >> a;
    spots.push_back(a);
}

int days = numberOfDays(K, N);

vector<int> temp;
for(int i = 0; i < days; i++) {
    if(i == K-1){
        temp.clear();
        for(int j = i; j <= i*K; j++) {
            temp.push_back(spots[j]);
        }   
        // get max of temp
        int max = *max_element(temp.begin(), temp.end());
    }
} 



}
