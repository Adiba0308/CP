#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,c=0;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i]) c+=(a[i]-b[i]);
    }
    cout<<c+1<<endl;
    
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