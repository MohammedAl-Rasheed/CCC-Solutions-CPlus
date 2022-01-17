#include <bits/stdc++.h>
using namespace std;

int row, col;
vector<int> Maze[1000001];
bool visited[1000001];
void DFS(int searchAB) {
    // if we already checked this node, return
    if (visited[searchAB]) {
        return;
    }
    // if we reach the goal node, than return
    else if(searchAB == row * col) {
        cout << "yes" << endl;
        exit(0);
    }

    // mark this node as visited
    visited[searchAB] = 1;
    // continue the search
    for(int& i : Maze[searchAB]) {
        DFS(i);
    }

    

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> row >> col;
    for(int i = 1; i <= row; ++i) {
        for(int j = 1; j <= col; ++j) {
            int val;
            cin >> val;
            Maze[i * j].push_back(val);
        }
    }

    DFS(1);
    cout << "no" << endl;

}