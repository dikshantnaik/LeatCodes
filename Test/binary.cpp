#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int len = sizeof(nums) / sizeof(nums[0]);
        len = len - 1;
        int mid = len / 2;
        int lo = 0;
        int hi = len -1;

        while (hi > lo)
        {

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target > nums[mid])
            {
                lo = mid + 1;
                mid = 
            }
            else if (target < nums[mid])
            {
                hi = mid - 1;
            }
        }
        return -1;
    }
};
int main(int argc, char const *argv[])
{

    Solution obj = Solution();
    vector<int> num = {1, 2, 3, 4, 5};
    cout << "Hello";
    cout << obj.search(num, 4);
    return 0;
}
