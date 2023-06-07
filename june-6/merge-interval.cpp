#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
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
    vector<vector<int>> merge(vector<vector<int>> &v)
    {
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        vector<vector<int>> ans;
        for (int i = 0; i < v.size(); i++)
        {
            pq.push({v[i][0], v[i][1]});
        }
        while (!pq.empty())
        {
            pii a = pq.top();
            pq.pop();
            if (pq.size() == 0)
            {
                ans.push_back({a.first, a.second});
                break;
            }
            pii b = pq.top();
            pq.pop();
            if (b.first > a.second)
            {
                ans.push_back({a.first, a.second});
                pq.push(b);
            }
            else if (b.first == a.second)
            {
                pq.push({a.first, b.second});
            }
            else
            {
                pq.push({a.first, max(a.second, b.second)});
            }
        }
        return ans;
    }
};