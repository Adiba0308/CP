#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(v[i]==v[i+1] && v[i]==v[i-1]) continue;
        else if(v[i]!=v[i+1] && v[i]==v[i-1])
        {
            cout<<i+2<<endl;
            return;
        }
        else if(v[i]==v[i+1] && v[i]!=v[i-1])
        {
            cout<<i<<endl;
            return;
        }
        else
        {
            cout<<i+1<<endl;
            return;
        }
    }
    
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