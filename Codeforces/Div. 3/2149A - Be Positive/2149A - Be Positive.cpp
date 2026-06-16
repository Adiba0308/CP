#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a=count(v.begin(), v.end(), -1);
    int b=count(v.begin(), v.end(), 0);
    if(a%2) cout<<b+2<<endl;
    else cout<<b<<endl;
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