#include<iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main() {
    //initilize our stack thats gonna hold the input
    vector<int> stack;
    int K;
    cin >> K;
    int n;
    int sum = 0;
    for(int i = 0; i < K; i++){
        cin >> n;
        // if its 0 pop back the last element
        if (n == 0) {
            stack.pop_back();
        } 
        // if its not than push it
        else {
            stack.push_back(n);
        }
    }
    // get the sum of the vector and print it
    for(int i = 0; i < stack.size(); i++){
        sum += stack[i];
    }
    cout << sum << endl;
}