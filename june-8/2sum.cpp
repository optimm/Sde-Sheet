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
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (m.find(target - nums[i]) != m.end())
                return {m[target - nums[i]], i};
            else
                m[nums[i]] = i;
        }
        return {n, n};
    }
};  