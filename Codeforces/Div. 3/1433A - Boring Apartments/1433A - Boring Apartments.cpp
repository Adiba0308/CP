#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    int r,c=0,count=0;
    while(n)
    {
        r=n%10;
        c++;
        count+=c;
        n=n/10;
    }
    cout<<count+((r-1)*10)<<endl;
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