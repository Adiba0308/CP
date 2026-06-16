#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    if(n<=3)
    {
        cout<<"1"<<endl;
        return;
    }
    int diff=abs(x1-x2);
    cout<<min(diff,n-diff)+k<<endl;
    
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