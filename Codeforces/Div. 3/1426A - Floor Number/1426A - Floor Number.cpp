#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    double n,x;
    cin>>n>>x;
    if(n==1) cout<<1<<endl;
    else cout<<ceil((n-2)/x)+1<<endl;
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