#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {  
    int N;
    scanf("%d", & N);
    // create a list to keep track of the teams scores
    vector<int> Swifts;
    vector<int> Semaphores;
    // create a list to keep track of the index of when teams have teh same score
    vector<int> commonScores;
    int input;
    // read in the scores
    for(int i = 0; i < N; i++) {
        scanf("%d", & input);
        Swifts.push_back(input);
    }
    for(int i = 0; i < N; i++) {
        scanf("%d", & input);
        Semaphores.push_back(input);
    }

    int sumSwifts = 0;
    int sumSemaphores = 0;
    // calculate the sum of the scores
    for(int i = 0; i < N; i++) {
        sumSwifts += Swifts[i]; // 1, 3
        sumSemaphores += Semaphores[i]; // 2, 2 
        // when the scores are the same, add the index to the list
        if(sumSwifts == sumSemaphores) {
            commonScores.push_back(i+1);
        }
    }
    // now if there are no common scores print zeros, if there are print the largest
    if (commonScores.size() != 0)  {
        int largest_element  = *max_element(commonScores.begin(),commonScores.end());
        cout << largest_element << endl;
    }
    else {
        cout << 0 << endl;
    }
}