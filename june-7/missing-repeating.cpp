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

pair<int, int> missingAndRepeating(vector<int> &v, int n)
{
    pair<int, int> ans;

    for (int i = 0; i < n; i++)
    {
        int temp = abs(v[i]);
        if (v[temp - 1] < 0)
        {
            ans.second = temp;
        }
        else
        {
            v[temp - 1] = -v[temp - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            ans.first = i + 1;
            break;
        }
    }
    return ans;
}