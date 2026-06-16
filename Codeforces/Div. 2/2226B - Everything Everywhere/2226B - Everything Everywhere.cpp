#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(is_sorted(v.begin(), v.end()) || is_sorted(v.rbegin(), v.rend()))
    {
        cout<<n-1<<endl;
        return;
    }
    int c=0;
    for(int i=1;i<n;i++)
    {
        if((max(v[i-1],v[i])-min(v[i-1],v[i]))==gcd(v[i-1],v[i])) c++;
    }
    cout<<c<<endl;
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