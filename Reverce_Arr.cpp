#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> res;
    for (int i = arr.size() - 1; i > 0; i--)
    {
        res.push_back(arr[i]);
    }
    for (auto &&i : res)
    {
        cout << i;
    }
}