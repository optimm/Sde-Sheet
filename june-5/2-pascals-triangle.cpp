#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
}
class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        if (n == 1)
        {
            return {{1}};
        }
        vector<vector<int>> ans;
        ans.push_back({1});
        for (int i = 1; i < n; i++)
        {
            int sz = i + 1;
            vector<int> temp(sz);
            temp[0] = temp[sz - 1] = 1;
            for (int j = 1; j < sz - 1; j++)
            {
                temp[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};