#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    vector<int>v={x,y};
    sort(v.begin(), v.end());
    for(int i=0;i<2;i++) cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}