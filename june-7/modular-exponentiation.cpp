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

int modularExponentiation(int x, int n, int m)
{
    long long cur = x;
    long long pow = 1;
    if (n == 0 || x == 1)
        return 1 % m;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            cur = ((cur % m) * (cur % m)) % m;
            n /= 2;
        }
        else
        {
            pow = (pow * cur) % m;
            n--;
        }
    }
    return pow % m;
}   