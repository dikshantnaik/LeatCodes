#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int ans = 0;
        for (auto i = 0; i < nums.size(); i++)
        {
            for (auto j = 0; j < nums.size(); j++)
            {
                cout << j << " ";
                // if (i == j)
                // {
                //     cout << i << " = " << nums[i] << " ||" << j << "=" << nums[j];
                //     ans++;
                //     break;
                // }
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{

    Solution obj;
    vector<int> num = {1, 2, 3, 1, 1, 3};
    obj.numIdenticalPairs(num);
    return 0;
}
