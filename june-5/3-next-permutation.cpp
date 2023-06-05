#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
}

class Solution
{
public:
    void nextPermutation(vector<int> &v)
    {
        if (v.size() == 1)
            return;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                sort(v.begin(), v.end());
                return;
            }
            if (v[i] > v[i - 1])
            {
                sort(v.begin() + i, v.end());
                int pos = upper_bound(v.begin() + i, v.end(), v[i - 1]) - v.begin();
                swap(v[i - 1], v[pos]);
                return;
            }
        }
    }
};