#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<char> student;
    vector<char> answers;
    for(int i = 0; i < N; i++) {
        char letter;
        cin >> letter;
        student.push_back(letter);
    }   

    for(int i = 0; i < N; i++) {
        char letter;
        cin >> letter;
        answers.push_back(letter);
    }
    int score = 0;
    for(int i = 0; i < N; i++) {
        if(student[i] == answers[i]) {
            score++;
        }
    }
    cout << score << endl;


}
