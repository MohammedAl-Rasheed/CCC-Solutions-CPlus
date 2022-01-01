#include<iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using std::count;
int main() {
    // intializing our variables and taking input
    int n;
    cin >> n;
    std::string line;
    int tCounter = 0;
    int sCounter = 0;
    string holder;
    // taking the input and storing it in one variable
    for(int i = 0; i < n+1; i++) {
        getline(cin, line);
        holder += line;
    }
    // trun everything into lower case
    std::transform(holder.begin(), holder.end(), holder.begin(), ::tolower);
    // looping through the string to count for the number of "t" and "s"
    for(int i = 0; i < holder.length(); i++) {
        if(holder[i] == 't') {
            tCounter++;
        }
        else if(holder[i] == 's') {
            sCounter++;
        }
    
    }
    // if there are more "t" than "s" then know its english and if its not english than it is french
    if(tCounter > sCounter) {
        cout << "English" << endl;
    }
    else {
        cout << "French" << endl;
    }
}
