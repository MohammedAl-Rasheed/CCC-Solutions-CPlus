#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int W;
    cin >> W;
    int N;
    cin >> N;
    // 50, 30, 10, 10, 40, 50
    vector<int> weightCars;
    for(int i = 0; i < N; i++) {
        int weight;
        cin >> weight;
        weightCars.push_back(weight);
    }
    int count = 0;
    if ( weightCars[0] > W) {
        cout << count;
        return 0;
    }
    while (weightCars.size() != 0) {
        // 100 | 90 | 110
        int sumOfSeq = weightCars[0] + weightCars[1] + weightCars[2] + weightCars[3];
        if(sumOfSeq <= W) {
            // 30, 10, 10, 40, 50 | 10, 10, 40, 50
            weightCars.erase(weightCars.begin());
            // count = 1 | 2 
            count++;
        }
        else {
            // 10 + 10 + 40 = 60
            if((weightCars[0] + weightCars[1] + weightCars[2]) <= W)  {
                // erase vector
                weightCars.erase(weightCars.begin(), weightCars.end());
                count += 3;
            }
            else if((weightCars[0] + weightCars[1]) <= W) {
                weightCars.erase(weightCars.begin(), weightCars.end());
                count += 2;
            }
            else if(weightCars[0] <= W) {
                weightCars.erase(weightCars.begin(), weightCars.end());
                count++;
            }
            else {
                weightCars.erase(weightCars.begin(), weightCars.end());
            }
        }
     }
    cout << count;
    return 0;

}