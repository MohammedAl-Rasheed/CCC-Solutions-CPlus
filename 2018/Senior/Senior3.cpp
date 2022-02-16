#include <bits/stdc++.h>
using namespace std;

struct pairs {
    int x;
    int y;
};

void DFS(vector<vector<char>> factory, vector<pairs> visting, pairs curr, pairs cur, int steps) {
    cout << cur.x << " " << cur.y << endl;
    // if there spots are the same as the current spot then were dunno
    if(cur.x == curr.y and cur.y == curr.y) {
        pairs cur = visting.back();
        visting.pop_back();
        return DFS(factory, visting, curr, cur, 0);
    }
    // if y is greater
    if(cur.y > curr.y) {
        if(factory[cur.x][cur.y-1] != 'W') {
            pairs cur = {cur.x, cur.y-1};
            return DFS(factory, visting, curr, cur, steps+1);
        }
    }
    // if y is less
    if(cur.y < curr.y) {
        if(factory[cur.x][cur.y+1] != 'W') {
            pairs cur = {cur.x, cur.y+1};
            return DFS(factory, visting, curr, cur, steps+1);
        }
    }
    // if x is greater
    if(cur.x > curr.x) {
        if(factory[cur.x-1][cur.y] != 'W') {
            pairs cur = {cur.x-1, cur.y};
            return DFS(factory, visting, curr, cur, steps+1);
        }
    }
    // if x is less
    if(cur.x < curr.x) {
        if(factory[cur.x+1][cur.y] != 'W') {
            pairs cur = {cur.x+1, cur.y};
            return DFS(factory, visting, curr, cur, steps+1);
        }
    }
};



int main() {
    int M, N;
    cin >> M >> N;
    // create a vector of pairs
    vector<pairs> visting;
    // take input
    vector<vector<char>> factory;
    // initlize pair 
    pairs curr;
    for(int i = 0; i < M; i++) {
        vector<char> row;
        for(int j = 0; j < N; j++) {
            char c;
            cin >> c;
            if(c == '.') {
                // append i and j as pair to visting
                pairs p;
                p.x = i;
                p.y = j;
                visting.push_back(p);
            }
            else if(c == 'S') {
                curr.x = i;
                curr.y = j;
            }
            row.push_back(c);
        }
        factory.push_back(row);
    }
    // pop the top element from visiting
    pairs cur = visting.back();
    visting.pop_back();

    DFS(factory, visting, curr, cur, 0);

    // for(int i = 0; i < M; i++) {
    //     for(int j = 0; j < N; j++) {
    //         cout << factory[i][j];
    //     }
    //     cout << endl;
    // }

    // // print visting
    // for(int i = 0; i < visting.size(); i++) {
    //     cout << visting[i].x << " " << visting[i].y << endl;
    // }

}