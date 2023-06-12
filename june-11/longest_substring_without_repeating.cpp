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

int uniqueSubstrings(string s)
{
    vector<int> v(26,-1);
    int n = s.size();

    int r=0,l=0,ans=0,len=0;

    while(r<n){
          
          while(v[s[r]-'a']==-1){
           len++;
           v[s[r]-'a']=r;
           r++;
          }
        //   cout<<len<<endl;
          ans=max(len,ans);
          
          int x =v[s[r]-'a']+1;
          for(int i=l;i<=v[s[r]-'a'];i++){
              v[s[i]-'a']=-1;
          }
          l=x;
        //   cout<<l<<" "<<r+1<<endl;
          v[s[r]-'a']=r++;
          len=r-l;
    }
    return ans;
}