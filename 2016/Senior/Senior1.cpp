#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length() != str2.length()) {
        cout << "N";
        return 0;
    }

    int stringOne[26] = {0};
    int stringTwo[26] = {0};
    int wc = 0;
    int theDiff = 0;

    for(int i = 0; i < str1.length(); i++) {
        stringOne[str1[i] - 'a'] += 1;
        if(str2[i] != '*') {
            stringTwo[str2[i] - 'a'] += 1;
        }
        else { 
            wc++;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(stringOne[i] < stringTwo[i]) {
            cout << "N";
            return 0;
        }
        else {
            theDiff += stringOne[i] - stringTwo[i];
        }
    }

    cout << ((theDiff == wc) ? "A" : "N");
}