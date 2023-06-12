#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 int n;
 cin >> n;
 vector<int> a(n);
for (int i = 0; i < n; i++){cin >> a[i];}

return 0;
}


int subarraysXor(vector<int> &arr, int x)
{
    int ans=0;
    map<int,int> mp;
    int cur=0;
    for(int i=0;i<arr.size();i++){
        cur^=arr[i];
        if(cur==x)ans++;
        int xo= cur^x;
        if(mp.count(xo)>0){
            ans+=mp[xo];
        }
        mp[cur]++;
    }
    return ans;
}