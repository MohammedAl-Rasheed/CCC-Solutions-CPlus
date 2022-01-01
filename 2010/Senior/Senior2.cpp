#include<iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    // Initilizing our variables
    int N;
    cin >> N;
    char letter;
    string binary;

    vector<string> binary_vector;
    vector<char> letter_vector;
    // looping through the number of lines of input we will recieve
    for(int i = 0; i < N; i++) {
        cin >> letter >> binary;
        binary_vector.push_back(binary);
        letter_vector.push_back(letter);
    }

    string LF;
    cin >> LF;
    string output = '';

    for(int i = 0; i < N; i++)
        int position = LF.find(letter_vector);
}


// Time complexity of O(N) where N is the number of lines of input