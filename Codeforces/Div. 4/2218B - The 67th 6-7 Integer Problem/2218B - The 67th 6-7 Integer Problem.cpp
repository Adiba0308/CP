#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int>v(7);
    for(int i=0; i<7;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int sum=0;
    for(int i=0; i<6;i++)
    {
        sum+=v[i];
    }
    cout<<v[6]-sum<<endl;
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