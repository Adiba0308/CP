#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int>r;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        r.insert(a);
    }
    auto it1 = r.lower_bound(r.size());
    int c=*it1;
    cout<<c<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
        
}