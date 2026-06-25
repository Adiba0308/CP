#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{ 
    vector<int>v(3);
    
    for(int i=0;i<3;i++) cin>>v[i];
    for(int i=0;i<5;i++)
    {
    sort(v.begin(),v.end());
    v[0]++;
    }
 
 
    cout<<v[0]*v[1]*v[2]<<endl;
 
 
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