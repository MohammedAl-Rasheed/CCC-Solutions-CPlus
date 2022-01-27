#include <bits/stdc++.h>
using namespace std;

int circum = 1000000;

int main() {
    // Initlizing Input and Variables
    int numberOfHouses;
    cin >> numberOfHouses;
    vector<int> houses;
    for(int i = 0; i < numberOfHouses; i++) {
        int house;
        cin >> house;
        houses.push_back(house);
    }
    int numberOfHoses;
    cin >> numberOfHoses;
    int totalLengthOfHoses;

    // Sort the addresses
    sort(houses.begin(), houses.end());

    // Intilize variables to start binary search
    int low = 0;
    int high = circum;
    int mid;
    while(low < high){
        // Get the mid value make sure its int
        mid = (low + high) / 2;
        // calculate diamater of the circle based of mid
        int diameter = mid * 2;
        // get the length fo the houses vector
        int bestFit = houses.size();

        for(int i = 0; i < houses.size() and houses[i] <= houses[0] + diameter; i++) {
            int count = 1;
            int lastCur = houses[i];
            int j = i + 1;
            for(int j; j < houses.size() & (houses[i] > (houses[j] + diameter - circum)); j++) {
                if(houses[j] > lastCur) {
                    count++;
                    lastCur = houses[j] + diameter;
                }
            }
            if(count < bestFit) {
                bestFit = count;
            }
        }
        
        // if the best fit is greater than the number of hoses low is the mid
        if(bestFit > numberOfHoses) {
            low = mid;
        } else {
            high = mid;
            cout << high << endl;
        }
    }

    cout << high << endl;

}