#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,c=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(v[n-1]>0) c++;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i+1]>0) v[i]+=v[i+1];
        if(v[i]>0) c++;
    }
    cout<<c<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}