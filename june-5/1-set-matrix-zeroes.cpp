#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
}
class Solution
{
public:
    void setZeroes(vector<vector<int>> &v)
    {
        int m = v.size();
        int n = v[0].size();

        bool fr = false, fc = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == 0)
                {
                    if (j == 0)
                    {
                        fc = true;
                    }
                    if (i == 0)
                    {
                        fr = true;
                        break;
                    }
                    else
                    {
                        v[i][0] = 0;
                        v[0][j] = 0;
                    }
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (v[0][i] == 0)
            {
                for (int j = 1; j < m; j++)
                {
                    v[j][i] = 0;
                }
            }
        }
        for (int i = 1; i < m; i++)
        {
            if (v[i][0] == 0)
            {
                for (int j = 1; j < n; j++)
                {
                    v[i][j] = 0;
                }
            }
        }
        if (fr)
        {
            for (int i = 0; i < n; i++)
                v[0][i] = 0;
        }
        if (fc)
        {
            for (int i = 0; i < m; i++)
                v[i][0] = 0;
        }
    }
};