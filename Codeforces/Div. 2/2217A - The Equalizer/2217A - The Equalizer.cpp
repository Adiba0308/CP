#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,s=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    if(s%2!=0 || (n*k)%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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