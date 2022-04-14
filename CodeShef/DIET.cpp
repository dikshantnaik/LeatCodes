#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
    int n, k;

    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int food = 0;
    for (int i = 0; i < n; i++)
    {
        food = food + arr[i];
        if (food < k)
        {
            cout << "NO " << i + 1 << endl;
            break;
        }
        if (i == n - 1)
        {
            cout << "YES" << endl;
        }
        else if (food > k)
        {
            food = food - k;
        }
        else
        {
            food = food - k;
        }
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}