#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==67)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
    
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