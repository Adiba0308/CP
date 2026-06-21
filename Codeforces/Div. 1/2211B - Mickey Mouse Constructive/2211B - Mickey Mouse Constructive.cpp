#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,a,c=0;
    cin>>x>>y;
    a=abs(x-y);
    if(a==0 || a==1) cout<<1<<endl;
    else if(a==2 ||a==3) cout<<2<<endl;
    else
    {
        for(int i=1;i<=a;i++)
        {
            if(a%i==0) c++;
        }
        cout<<c%676767677<<endl;
    }
    for(int i=0;i<x;i++)
    {
        cout<<1<<" ";
    }
    for(int i=0;i<y;i++)
    {
        cout<<-1<<" ";
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