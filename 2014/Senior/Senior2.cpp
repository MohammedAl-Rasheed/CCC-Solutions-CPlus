#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    string is_good = "good";
    int pairs;
    cin >> pairs;
    vector<string> partnerOne;
    vector<string> partnerTwo;
    for(int i = 0; i < pairs; i++) {
        string name; // name1 of the the person
        cin >> name; // read the name
        partnerOne.push_back(name); // add the name to the vector
    }

    for(int i = 0; i < pairs; i++) {
        string name; // name1 of the the person
        cin >> name; // read the name
        partnerTwo.push_back(name); // push the name in pair
    }

    for(int i = 0; i < pairs; i++) {
        for(int j = 0; j < pairs; j++) {
            if(partnerOne[i] == partnerTwo[j]) {
                if(partnerOne[j] != partnerTwo[i] || partnerOne[i] == partnerTwo[i]) {
                    is_good = "bad";
                }
            }
        }
    }
    cout << is_good;
}







