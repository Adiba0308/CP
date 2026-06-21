#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c=0,b=0,in;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2)
        {
            c++;
        }
    }
    if(c%2)
    {
        cout<<-1<<endl;
        return;
    }
    else if(!c)
    {
        cout<<1<<endl;
        return;
    }
    for(int i=0;b<c/2;i++)
    {
        if(a[i]==2)
        {
            b++;
            in=i;
        }
    }
    cout<<in+1<<endl;
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