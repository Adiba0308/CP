#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n,c=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
   
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i], a[i+1]);
            a[i+1]=a[i]+a[i+1];
        }
        
    }
   
    
   
    
    cout<<a[n-1]<<endl;
    
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