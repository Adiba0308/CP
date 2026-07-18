#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    int one=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1) one++;

    }
    if(n%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(n==2 && (v[0]+v[1])!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    if((abs(one-(n/2)))%2==0) cout<<"YES"<<endl;
    
    else cout<<"NO"<<endl;
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