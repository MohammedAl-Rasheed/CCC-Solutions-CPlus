#include<iostream>
using namespace std;

int main() {
    // Initilizing our variables
    int n;
    int R, S, D;
    string identifier;
    // Getting the number of lines of input
    cin >> n;
    // Looping through the number of lines of input we will recieve
    int max = 0;
    int firstValue = 0;
    int secondValue = 0;
    string first = "";
    string second = "";
    for(int i = 0; i < n; i++) {
        cin >> identifier >> R >> S >> D;
        int CurrValue = 2 * R + 3 * S + D; // Calculating the current value
        if(CurrValue > firstValue) { // if the current value is greater than the first value
            secondValue = firstValue; // move back the first value to the second value
            second = first;
            firstValue = CurrValue; // and make the first value the current value
            first = identifier; 
        }
        else if(CurrValue > secondValue) {  // if the current value is greater than the second value
            secondValue = CurrValue; // make the second value the current value
            second = identifier;
        }
    }

    // return the output
    cout << first << "\n" << second;
}

// Time complexity of O(N) where N is the number of lines of input