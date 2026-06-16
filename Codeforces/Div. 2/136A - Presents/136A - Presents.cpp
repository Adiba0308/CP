#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        v[p]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
        
}