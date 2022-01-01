#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] > v2[0];
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> timeVelocity;
    vector<int> temp;
    int t;
    int v;
    // iterate through n
    for(int i = 0; i < n; i++) {
        cin >> t >> v;
        temp.push_back(t);
        temp.push_back(v);
        timeVelocity.push_back(temp);
        temp.clear();
    }
    // sort the timeVelocity vector by the first element of the vector
    sort(timeVelocity.begin(), timeVelocity.end(), sortcol);
    // reverse the vector
    reverse(timeVelocity.begin(), timeVelocity.end());

    // (120 - 100) / (10 - 0)
    // (50 - 120) / (20 - 10)
    // print timevelocity
    // for(int i = 0; i < timeVelocity.size(); i++) {
    //     cout << timeVelocity[i][0] << " " << timeVelocity[i][1] << endl;
    // }
    int Vi = timeVelocity[0][1];
    int Ti = timeVelocity[0][0];
    double maxSpeed = 0;
    double tempSpeed = 0;
    for(int i = 0; i < timeVelocity.size() - 1; i++) {
        if (timeVelocity[i+1][1] < Vi) {
            tempSpeed = (double)(Vi - timeVelocity[i+1][1]) / (timeVelocity[i+1][0] - Ti);
        }
        else {
            tempSpeed = (double)(timeVelocity[i+1][1] - Vi) / (timeVelocity[i+1][0] - Ti);
        }
        Vi = timeVelocity[i+1][1];
        Ti = timeVelocity[i+1][0];
        if (tempSpeed > maxSpeed) {
            maxSpeed = tempSpeed;
        }
    }
    cout.precision(1); 
    cout << fixed << maxSpeed << endl;
}
