#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<abs(a-b)/2<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
        
}