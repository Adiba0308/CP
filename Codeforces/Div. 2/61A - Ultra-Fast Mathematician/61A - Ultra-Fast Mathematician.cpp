#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[i]) cout<<"0";
        else cout<<"1";
    }
    cout<<endl;
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
        
}