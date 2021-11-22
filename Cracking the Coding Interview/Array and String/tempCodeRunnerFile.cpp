#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isUnique(string str)
{
    map<char, bool> temp_char;
    for (auto i = 0; i < str.size(); i++)
    {
        char val = str.at(i);
        cout << val;