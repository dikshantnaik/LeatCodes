#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isUnique(string str)
{
    map<char, bool> temp_char;
    for (auto i = 0; i < str.size(); i++)
    {
        char val = str.at(i);
        if (temp_char[val])
        {
            return false;
        }
        temp_char[str.at(i)] = true;
        // cout << temp_char[val];
    }
    return true;
}
int main(int argc, char const *argv[])
{

    printf("Enter the String : ");
    string str;
    cin >> str;
    if (!isUnique(str))
    {
        printf("Not Unique");
    }
    else
    {
        printf("Unique");
    }

    return 0;
}