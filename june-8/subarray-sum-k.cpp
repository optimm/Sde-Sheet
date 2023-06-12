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

int LongestSubsetWithZeroSum(vector<int> arr)
{

    unordered_map<int, int> sum;
    int cur = 0, ans = 0;
    sum[0] = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        cur += arr[i];

        if (sum.count(cur) > 0)
        {
            ans = max(ans, i - sum[cur]);
        }
        else
        {
            sum[cur] = i;
        }
    }
    if (cur == 0)
        ans = arr.size();
    return ans;
}