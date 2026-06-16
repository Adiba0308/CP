#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n-2;i++)
    {
        if(v[i]==v[i+1] && v[i+1]==v[i+2]) 
        {
            cout<<v[i]<<endl; 
            return;
        }
        
    }
    cout<<"-1"<<endl;
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
