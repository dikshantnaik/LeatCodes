#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    {
        vector<bool> result;
        // cout << candies.max_size();
        int max2 = *max_element(candies.begin(), candies.end());
        for (auto &&i : candies)
        {
            if (i + extraCandies > max2)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }

        cout << max2;

        // cout << ;
        return result;
    }
    int main(int argc, char const *argv[])
    {

        vector<int> candies = {2, 3, 5, 1, 3};

        kidsWithCandies(candies, 3);
        return 0;
    }
