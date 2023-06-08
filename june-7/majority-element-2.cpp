#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return 0;
}

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int c1 = 0, c2 = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == res1)
        {
            c1++;
        }
        else if (arr[i] == res2)
        {
            c2++;
        }
        else if (c1 == 0)
        {
            res1 = arr[i];
            c1 = 1;
        }
        else if (c2 == 0)
        {
            res2 = arr[i];
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == res1)
            c1++;
        if (arr[i] == res2)
            c2++;
    }
    if (c1 > n / 3)
        ans.push_back(res1);
    if (c2 > n / 3)
        ans.push_back(res2);
    return ans;
}