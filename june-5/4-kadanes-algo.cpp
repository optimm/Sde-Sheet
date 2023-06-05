#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
}

class Solution
{
public:
    int maxSubArray(vector<int> &v)
    {
        int cur = v[0], ans = v[0];
        for (int i = 1; i < v.size(); i++)
        {

            if (cur < 0)
            {
                cur = 0;
            }
            cur += v[i];
            ans = max(cur, ans);
        }
        ans = max(cur, ans);
        return ans;
    }
};