#include<bits/stdc++.h>
using namespace std;

void solve()
{
    double a,b;
    cin>>a>>b;
    cout<<(long long)ceil(abs(a-b)/10)<<endl;
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