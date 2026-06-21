#include<bits/stdc++.h>
using namespace std;

void solve()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
 {
     cin>>v[i];
 }
 auto min=min_element(v.begin(),v.end());
 auto max=max_element(v.begin(),v.end());
 if(*min==*max)
 {
     cout<<"NO\n";
     return;
 }
 cout<<"YES\n";
 swap(*min,*max);
 for(int i=0;i<n;i++)
 {
     cout<<v[i]<<" ";
 }
 cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}