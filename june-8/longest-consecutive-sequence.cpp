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

class Solution
{
public:
    int longestConsecutive(vector<int> &v)
    {
        int n = v.size();
        unordered_map<int, int> s;
        for (int i = 0; i < n; i++)
        {
            s[v[i]] = 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            int x = v[i] - 1;

            if (s.count(x) == 0)
            {
                int curr = 0;
                x++;
                while (s.count(x) != 0)
                {
                    curr++;
                    x++;
                }
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};