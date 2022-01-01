#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


//method to output our answer
int printArray(vector<int> people)
{
    for (int i = 0; i < people.size(); i++)
    {
        cout << people[i] << "\n";
    }
    return -1;
}

int main() {
    int K;
    int m;
    int r;
    cin >> K;
    cin >> m;   
    // array to store the people
    vector<int> people;
    // temp array to store the people
    vector<int> ppl;
    for (int i = 0; i < K; i++)
    {
        ppl.push_back(i+1);
    }
    // generate an array of size m to store the Number of operations
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    // iterate through the array of operations
    for(int iter = 0; iter < m; iter++) {
        // for the ppl that arent gonna be removed add to temp list
        for(int i = 1; i < ppl.size()+1; i++) {
            if(i % arr[iter] != 0) {
                people.push_back(ppl[i-1]);
            }
        }
        //get rid of the templ ist
        ppl = people;
        people.clear();
    }
    // print the last list of people
    printArray(ppl);
}
