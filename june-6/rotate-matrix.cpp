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
    void rotate(vector<vector<int>> &v)
    {
        int n = v.size();
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i; j < n - i - 1; j++)
            {
                int temp = v[i][j];
                cout << v[i][j] << " " << v[n - j - 1][i] << " " << v[n - i - 1][n - j - 1] << " " << v[j][n - i - 1] << endl;
                v[i][j] = v[n - j - 1][i];
                v[n - j - 1][i] = v[n - i - 1][n - j - 1];
                v[n - i - 1][n - j - 1] = v[j][n - i - 1];
                v[j][n - i - 1] = temp;
            }
        }
    }
};