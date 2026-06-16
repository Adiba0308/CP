#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    double p=b/2.0;
    if(p<a)
    {
        if(n%2) cout<<(n-1)*p+a<<endl;
        else cout<<n*p<<endl;
    }
    else cout<<n*a<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}