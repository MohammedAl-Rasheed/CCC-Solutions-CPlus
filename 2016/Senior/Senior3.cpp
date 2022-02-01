#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> pho;
    map<int, int> pathsA;
    map<int, int> pathsB;
    for (int i = 0; i < M; i++) {
        int dis;
        cin >> dis;
        pho.push_back(dis);
    }
    for(int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        pathsA[a] = b;
        pathsB[b] = a;
    }



}