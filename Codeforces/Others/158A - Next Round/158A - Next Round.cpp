#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,count=0;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>=v[k-1] && v[i]>0) count++;
    }
    cout<<count<<endl;
    
}

int main()
{
    solve();
        
}