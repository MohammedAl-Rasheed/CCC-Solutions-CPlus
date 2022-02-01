#include <bits/stdc++.h>
using namespace std;
// print vector function
template <typename T>
void print_vector(vector<T> &v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}
// print map function
template <typename T>
void print_map(map<T, int> &m) {
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> lengths;
    for(int i = 0; i < N; i++) {
        int L;
        cin >> L;
        lengths.push_back(L);
    }

    int maxLength = 0;
    int differentHeight = 0;
    vector<int> heights;
    int height = 0;
    for(int i = 0; i < lengths.size(); i++) {
        int curr = lengths[i];
        for(int j = i+1; j < lengths.size(); j++) {
            int height = curr + lengths[j];
            // cout << curr << ": " << lengths[j] << endl;
            heights.push_back(height);
            height = 0;
        }
    }
    // get the frequency of heights
    map<int, int> counters;
    for(auto i: heights) {
        ++counters[i];
    }
    int maxValueMap = 0;
    int corrMaxValueMap = 0;

    for (auto i : counters) {
        if(i.second > maxValueMap) {
            maxValueMap = i.second;
            corrMaxValueMap = i.first;
        }
    }

    if(maxValueMap == 1) {
        cout << 1 << " " << heights.size();
    }
    else {
        cout << maxValueMap << " " << 1;
    }


}