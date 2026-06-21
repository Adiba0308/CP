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
    auto it=max_element(v.begin(), v.end());
    int max=*it;
    v.erase(remove(v.begin(), v.end(), max), v.end());
    if(!v.size())
    {
        cout<<-1<<endl;
        return;
    }
    int l=n-v.size();
    vector<int>v1(l,max);
    cout<<v.size()<<" "<<l<<endl;
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<v1[i]<<" ";
    }
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