
#include <bits/stdc++.h>
#define ll long long int
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
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int x) {
        set<vector<int>> ans;
        ll n = v.size();
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                ll t = (ll)x-v[i];
                t-=v[j];
                unordered_map<ll,ll> m;
                for(ll k=j+1;k<n;k++){
                    if(m.find(t-v[k])!=m.end())
                        ans.insert({v[i],v[j],(int)t-v[k],v[k]});
                    else
                        m[v[k]]=k;
                }
            }
        }
        
         vector<vector<int>> res(ans.begin(),ans.end());
         return res;
    }
};