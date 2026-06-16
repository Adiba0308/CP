#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> a(3);
        for(auto &v:a) cin>>v;
        if((a[0]+a[1]+a[2])>=2) p++;
    }
    
    cout<<p<<endl;
    
}

int main()
{
    solve();
        
}