#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    double n,x,y,z;
    cin>>n>>x>>y>>z;
    int c1=ceil(n/(x+y));
    int c2=ceil((n-(x*z))/(x+(10*y)))+z;
    cout<<min(c1,c2)<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}