#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,o=0;
    cin>>n;
    int a[n];
    map<int,int>f;
    f[1]=0;
    f[-1]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        f[a[i]]++;
    }
    //cout<<f[1]<<" "<<f[-1]<<endl;
    for(int i=0;i<=n;i++)
    {
        if((f[1]>=f[-1] && f[-1]%2==0))
        {
            cout<<o<<endl;
            return;
        }
        f[1]++;
        f[-1]--;
        o++;
    }
    
    
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}