#include <bits/stdc++.h>
using namespace std;


int main() {
    string H;
    string str;
    cin >> H;
    cin >> str;
    int start = 0;
    int size = H.size();
    int count = 0;
    set<string> setArray;
    sort(H.begin(), H.end());
    while(start != str.size()-size+1) {
        string subStr = str.substr(start, size);
        sort(subStr.begin(), subStr.end());

        if(H == subStr & setArray.insert(str.substr(start, size)).second) {
            count++;
            start++;
        }
        else {
            start++;
        }
    }

    cout << count;
}