#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,sum=0,count=0;
    cin>>n>>m;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {

        sum+=v[i].size();
        if(sum<=m) count++;
        else break;
    }
    cout<<count<<endl;
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