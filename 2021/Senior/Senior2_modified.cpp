#include <bits/stdc++.h>
using namespace std;

// print array function
void printArray(vector<char> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// first line: rows are 1 to M
int M;
// second line:cols are 1 to N
int N;
// third line: number of choices
int K;

// initilize char to char dict
unordered_map<char, char> dict;

int main() {
dict.insert(pair<char, char>('B', 'G'));
dict.insert(pair<char, char>('G', 'B'));
cin >> M >> N >> K;
// [B, B, B, B, B, B, B, B, B]
vector<char> canvas;

for(int i = 0; i < M * N; i++) {
    canvas.push_back('B');
}

int count = 0;
for(int i = 0; i < K; i++) {
    char type;
    int index;
    cin >> type >> index;
    index = index - 1;
    if(type == 'R') {
        for(int j = index * N; j < ((index * N) + N); j++) {
            if(canvas[j] == 'B') {
                count++;
                canvas[j] = 'G';
            }
            else {
                count--;
                canvas[j] = 'B';
            }
        }
    }
    else {
        for(int j = index; j < M * N; j += N) {
            if(canvas[j] == 'B') {
                count++;
                canvas[j] = 'G';
            }
            else {
                count--;
                canvas[j] = 'B';
            }
        }
    }
}

cout << count << endl;

}