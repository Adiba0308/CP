#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    cin.ignore();
    set<string>s;
    for(int i=0;i<n;i++)
    {
        string leaf;
        getline(cin,leaf);
        s.insert(leaf);
    }
    cout<<s.size()<<endl;
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