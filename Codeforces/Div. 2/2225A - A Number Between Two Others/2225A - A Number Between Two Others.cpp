#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long x,y;
    cin>>x>>y;
    if((y-x)>=2*x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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