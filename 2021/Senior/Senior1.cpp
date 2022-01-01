#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights;
    vector<int> widths;
    for(int i = 0; i < n+1; i++) {
        int h;
        cin >> h;
        heights.push_back(h); //[2, 3, 6 2]
    }
    for(int i = 0; i < n; i++) {
        int w;
        cin >> w;
        widths.push_back(w); // [4, 1, 1]
    }

    double totalArea = 0;
    for(int i = 0; i < n; i++) {
        int hL = heights[i]; // 2
        int base = widths[i]; // 4
        int hR = heights[i+1]; // 3
        totalArea += (double) base * (hL + hR) / 2; // 4 * (2 + 3) / 2 = 10
    }

    cout.precision(1);
    cout << fixed << totalArea << endl;
}
