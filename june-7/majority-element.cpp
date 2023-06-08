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

int findMajorityElement(int arr[], int n)
{
    int res = arr[0], c = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == res)
        {
            c++;
        }
        else
        {
            c--;
        }
        if (c == 0)
        {
            res = arr[i];
            c = 1;
        }
    }
    c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == res)
            c++;
    }
    return c > n / 2 ? res : -1;
}