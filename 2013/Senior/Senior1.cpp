#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


bool is_distinctDigits(string year)
{
    // convert the string to a list of characters
    vector<char> year_list;
    for (int i = 0; i < year.length(); i++)
    {
        year_list.push_back(year[i]);
    }
    // make sure the list does not have repeated characters
    sort(year_list.begin(), year_list.end());
    for (int i = 0; i < year_list.size() - 1; i++)
    {
        if (year_list[i] == year_list[i + 1])
        {
            return false;
        }
    }

    return true;
}


int main() {
    int output;
    cin >> output;
    // we want the next year that has distincs digits even if the current year does have distinct digits so we need to add 1 to it
    output++;
    // if it doesnt have distinct digits, then it is not a valid year so we add it 1 to it till it is 
    while(is_distinctDigits(std::to_string(output)) != true)
    {
        output++;
    }
    cout << output;
}
