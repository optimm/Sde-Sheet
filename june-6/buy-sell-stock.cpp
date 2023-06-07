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
    int maxProfit(vector<int> &a)
    {
        int mini = INT_MAX, ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            mini = min(a[i], mini);
            ans = max(ans, a[i] - mini);
        }
        return ans;
    }
};