#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> temp;
    vector<vector<int>> sunflowers;
    // store input into 2d list
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int input;
            cin >> input;
            temp.push_back(input);
        }
        sunflowers.push_back(temp);
        temp.clear();
    }

    // get index of smallest number
    // get the smallest number of that sunflower and the index of the smallest number
    string index = "";
    int smallest = 1;
    for(int i = 0; i < sunflowers.size(); i++) {
        for(int j = 0; j < sunflowers[i].size(); j++) {
            if(sunflowers[i][j] <= smallest) {
                index = to_string(i) + "," + to_string(j);
                smallest = sunflowers[i][j];
            }
        }
    }
    // to help determine the dictionary's key's
    int farthestColumn = sunflowers[0].size() - 1;
    int farthestRow = sunflowers.size() - 1;

    string bottomRowLeftColumn = to_string(farthestRow) + "," + "0";
    string bottomRowRightColumn = to_string(farthestRow) + "," + to_string(farthestColumn);
    string topRowRightColumn = "0," + to_string(farthestColumn);
    // get how many rotations needed depending on the index of where the 1 is
    map<string, int> rotations = {
        {
            {"0,0", 0},
            {bottomRowLeftColumn, 1},
            {bottomRowRightColumn, 2},
            {topRowRightColumn, 3},

        }
    };

    
    int madeup = rotations[index];
    // rotate the 2d list 90s degrees
    for(int i = 0; i < madeup; i++){
        // intilize temporary list
        vector<vector<int>> sunflowers90;
        // rotate 90 degrees
        for(int i = 0; i < N; i++) {
            vector<int> temp;
            for(int j = N - 1; j >= 0; j--) {
                temp.push_back(sunflowers[j][i]);
            }
            sunflowers90.push_back(temp);
        } 
        // make the temp list the new list
        sunflowers = sunflowers90;
    }
    // print the vector
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << sunflowers[i][j] << " ";
        }
        cout << endl;
    }

}