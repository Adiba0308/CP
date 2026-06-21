#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c=0;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
        return;
    }
    if(a<=b)
    {
        cout<<b-a<<endl;
        return;
    }
    cout<<(((a/b)+1)*b-a)<<endl;
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