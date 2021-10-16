#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {

        int res = 0;

        for (auto i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (auto j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            // ans[i] = sum;
            res = max(res, sum);
        }
        return res;
    }
};
