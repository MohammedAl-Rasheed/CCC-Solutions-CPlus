#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    string flip;
    cin >> flip;

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    // variables to keep count of the number of flip types
    int vcount = 0;
    int hcount = 0;
    // iterate through the string to get the count of flip types
    for(int i = 0; i < flip.size(); i++) {
        if(flip[i] == 'V') {
            vcount++;
        } else {
            hcount++;
        }
    }
    // iterate through the number of vertical flips
    int vIter = 0;
    while (vIter != vcount) {
        int temp0 = nums[0];
        int temp1 = nums[1];
        int temp2 = nums[2];
        int temp3 = nums[3];
    
        nums[0] = temp1;
        nums[1] = temp0;
        nums[2] = temp3;
        nums[3] = temp2;
        vIter++;
    }

    // iterate through the number of horizontal flips
    int hIter = 0;
    while (hIter != hcount) {
        int temp0 = nums[0];
        int temp1 = nums[1];
        int temp2 = nums[2];
        int temp3 = nums[3];

        nums[0] = temp2;
        nums[1] = temp3;
        nums[2] = temp0;
        nums[3] = temp1;
        hIter++;
    }

    cout << nums[0] << " " << nums[1] << "\n";
    cout << nums[2] << " " << nums[3] << "\n";

}