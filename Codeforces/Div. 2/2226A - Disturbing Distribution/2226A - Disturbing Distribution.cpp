#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,sum=0;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>1) sum+=v[i];
    }
    if(v[n-1]==1) cout<<(sum+1)%676767677<<endl;
    else cout<<sum%676767677<<endl;
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