#include <bits/stdc++.h>
using namespace std;

// first line: rows are 1 to M
int M;
// second line:cols are 1 to N
int N;
// third line: number of choices
int K;

// initilize dictionary char to char
map<char, char> dict;

int main() {
dict.insert(pair<char, char>('B', 'G'));
dict.insert(pair<char, char>('G', 'B'));
cin >> M >> N >> K;
// [B, B, B, B, B, B, B, B, B]
vector<vector<char>> canvas;

// populate the canvas with B
for(int i = 0; i < M; i++) {
    vector<char> row;
    for(int j = 0; j < N; j++) {
        row.push_back('B');
    }
    canvas.push_back(row);
}

for(int i = 0; i < K; i++) {
    char type;
    int index;
    cin >> type >> index;
    if(type == 'R') {
        for(int j = 0; j < N; j++) {
            canvas[index-1][j] = dict[canvas[index-1][j]];
        }

    }
    else {
        for(int j = 0; j < M; j++) {
            canvas[j][index-1] = dict[canvas[j][index-1]];
        }
        
    }
    }

// count the number of g's
int count = 0;
for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
        if(canvas[i][j] == 'G') {
            count++;
        }
    }
}

cout << count << endl;

}