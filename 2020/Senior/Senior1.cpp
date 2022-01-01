#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] < v2[1];
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
    int maxSpeed = 0;
    for(int i = 0; i < timeVelocity.size(); i++) {
        int speed = (timeVelocity[i+1][1] - timeVelocity[i][1]) / (timeVelocity[i+1][0] - timeVelocity[i][0]);
        if (speed < 0) {
            speed = -speed;
        }
        if (speed < maxSpeed) {
            maxSpeed = speed;
        }
    }
    cout << maxSpeed << "\n";

}
