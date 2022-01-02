#include<iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


int main() {
    int N;
    cin >> N;
    std::map<string, char> dict;
    for(int i = 0; i<N; i++) {
        char letter;
        string number;
        cin >> letter >> number;
        dict[number] = letter;
    }

    string code;
    cin >> code;
    int start = 0;
    int end = 0;
    string output;
    while(code.size() != 0) {
        if(dict.count(code.substr(start, end))) { 
            output += dict[code.substr(start, end)];
            code.erase(start, end);
            end = 0;
        } 
        else {
            end++;
        }
    }
    cout << output << endl;
}



