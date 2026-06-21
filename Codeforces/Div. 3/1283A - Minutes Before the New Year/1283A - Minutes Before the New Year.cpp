#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int h,m;
    cin>>h>>m;
    cout<<(24.00-h-(m/60.00))*60<<endl;;
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