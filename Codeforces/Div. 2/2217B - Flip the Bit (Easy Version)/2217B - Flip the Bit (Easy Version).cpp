#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,p;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>p;
    p--;
    int l=0;
    for(int i=0;i<p;i++)
    {
        if(v[i]!=v[i+1]) l++;
    }
    int r=0;
    for(int i=p;i<n-1;i++)
    {
        if(v[i]!=v[i+1]) r++;
    }
    
    int c = max(r,l);
    if(c%2) cout<<c+1<<endl;
    else cout<<c<<endl;
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