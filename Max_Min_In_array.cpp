#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr = {
        66,
        5,
        4,
        4,
        3,
        2,
        3,
        1,
        34,
        32,
        2,
    };
    vector<int> res;
    int max = arr[0];
    int min = arr[6];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
    return 0;
}