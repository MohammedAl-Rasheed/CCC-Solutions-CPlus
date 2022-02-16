#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int m;
        cin >> m;
        vector<int> mountain;
        vector<int> branch;
        char result = 'Y';

        for(int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            mountain.push_back(temp);
        }

        while(mountain[mountain.size()-1] != 1) {
            branch.push_back(mountain[mountain.size()-1]);
            mountain.pop_back();
        }

        mountain.pop_back();

        int need = 2;
        while(mountain.size() > 0 or branch.size() > 0) {
            if(branch.size() > 0 and mountain.size() > 0) {
                if(branch[branch.size()-1] == need) {
                    branch.pop_back();
                    need++;
                }
                else if(mountain[mountain.size()-1] == need) {
                    mountain.pop_back();
                    need++;
                }
                else {
                    branch.push_back(mountain[mountain.size()-1]);
                    mountain.pop_back();
                }
            }   
            else if(branch.size() > 0) {
                if(branch[branch.size()-1] == need) {
                    branch.pop_back();
                    need++;
                }
                else {
                    result = 'N';
                    break;
                }
            }
            else {
                if(mountain[mountain.size()-1] == need) {
                    mountain.pop_back();
                    need++;
                }
                else {
                    branch.push_back(mountain[mountain.size()-1]);
                    mountain.pop_back();
                }
            }
    }

    cout << result << endl;
    
    }
}