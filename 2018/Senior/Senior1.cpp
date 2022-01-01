#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int N;
    int input;
    cin >> N;
    vector<float> villages;
    for(int i = 0; i < N; i++) {
        cin >> input;
        villages.push_back(input);
    }   
    sort(villages.begin(), villages.end());
    float Total = 0;
    for(int i = 0; i < villages.size(); i++) {
        float sum1 = villages[i+1] + villages[i]; //25
        float mid1 = sum1/2; //12.5
        float sum2 = villages[i+1] + villages[i+2]; //31
        float mid2 = sum2/2; //15.5
        float temp = mid1 - mid2;
        if(temp < 0) {
            temp = temp * (-1);
        }
        if(temp < Total or Total == 0) {
            Total = temp;
        }
    }
    cout << fixed << setprecision(1);
    cout << Total << endl;
}