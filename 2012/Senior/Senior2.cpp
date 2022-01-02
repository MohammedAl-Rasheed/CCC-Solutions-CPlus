#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int roman(char x) {
    if(x == 'I') {
        return 1;
    }
    else if(x == 'V' ) {
        return 5;
    }
    else if(x == 'X') {
        return 10;
    }
    else if(x == 'L') {
        return 50;
    }
    else if(x == 'C') {
        return 100;
    }
    else if(x == 'D') {
        return 500;
    }
    else {
        return 1000;
    }
}

int main() {
    string symbols;
    cin >> symbols;

    int pair = 0;

    for(int i = 0; i < symbols[i]; i += 2) {
        int arabicLetter = symbols[i] - '0';
        int romanLetter = roman(symbols[i+1]);
        if(symbols[i+2]) {
            if(romanLetter < roman(symbols[i+3])) {
                pair -= arabicLetter * romanLetter;
                continue;
            }
        }
        pair += arabicLetter * romanLetter;
    } 
    
    cout << pair;
}
