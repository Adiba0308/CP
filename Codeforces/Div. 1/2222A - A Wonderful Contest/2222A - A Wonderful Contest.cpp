#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,sum=0;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(find(v.begin(), v.end(), 100) != v.end()) cout<<"YES"<<endl;
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