#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;
    if(k==1)
    {
        cout<<n<<endl;
        return;
    }
    int m=1;
    while(m<=n)
    {
        m<<=1;
    }
    cout<<m-1<<endl;
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