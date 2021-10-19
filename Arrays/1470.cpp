#include <iostream>
#include <vector>

using namespace std;

int shuffle(vector<int> arr, int n)
{
    // int n = 3;
    // vector<int> arr = {2, 5, 1, 3, 4, 7};
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
    }

    int j = n;
    for (auto i = 1; i <= ans.size() && j < arr.size(); i += 2)
    {
        ans.insert(ans.begin() + i, arr[j]);
        j++;
    }

    for (auto k : ans)
    {
        cout << k << " ";
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int n = 3;
    vector<int> arr = {2, 5, 1, 3, 4, 7};
    shuffle(arr, n);
    return 0;
}
