#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// basic combinatorics/combinations C(J, r) = J!/(J-r)!r!
int main() {
    int J;
    cin >> J;
    J = J - 1;
    int possibleCombos = (J*(J-1)*(J-2))/6;
    cout << possibleCombos;
}
